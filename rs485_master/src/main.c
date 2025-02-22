#include <string.h>

#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/uart.h>
#include <zephyr/sys/printk.h>

// gpio_pin_configure_dt -> setup input or output of gpio
// gpio_pin_set_dt set output wether HIGH or LOW
// k_msleep() delay.
// k_msgq_DEFINE() untuk store data yang bisa dikirim antar thread(?) wth that mean?
#define SEND 1
#define REC 0

static const struct gpio_dt_spec driver_switch = GPIO_DT_SPEC_GET(DT_NODELABEL(rs_driver), gpios);
static const struct device *uart_dev = DEVICE_DT_GET(DT_NODELABEL(uart2));

char msg[64];
char msgout[32] = "Hello from ESP32!\n";
int index = 0;
struct k_work send;
struct k_event onreset;
// volatile bool rx = 0;

void prt_uart(char *tem)
{
    k_msleep(500);
    gpio_pin_set_dt(&driver_switch, SEND);
    k_msleep(250);
    int len = strlen(tem);
    for (int i = 0; i < len; i++)
    {
        // printk("0x%02X ", tem[i]);
        uart_poll_out(uart_dev, tem[i]);
    }
    while (!uart_irq_tx_complete(uart_dev))
    {
        k_msleep(1);
    }
    // printk("%s\n", tem);
    k_msleep(250);
    gpio_pin_set_dt(&driver_switch, REC);
}

void sendmsg(struct k_work *item)
{
    prt_uart(msgout);
}

void getmsg(const struct device *dev, void *user_data)
{
    k_event_post(&onreset, BIT(0));
    uint8_t d;

    if (!uart_irq_update(uart_dev))
    {
        return;
    }
    if (!uart_irq_rx_ready(uart_dev))
    {
        printk("rx not redi :(\n");
        return;
    }

    while (uart_fifo_read(uart_dev, &d, 1) == 1)
    {
        // printk("0x%02X ", d);
        if (d == 0xFF || d == 0x00) // very very bad hacky way, quick fixing noise on hardware
            continue;
        if ((d == '\n' || d == '\r') && index > 0)
        {
            // printk("%d", rx);
            msg[index] = '\0';
            printk("Received: %s\n", msg);

            memset(msg, 0, sizeof(msg));

            index = 0;
            k_work_submit(&send);
            // gpio_pin_set_dt(&driver_switch, 1);
        }
        else if (index < sizeof(msg) - 1)
        {
            msg[index++] = d;
        }
    }
    uart_irq_rx_enable(uart_dev);
}

int main(void)
{
    if (!gpio_is_ready_dt(&driver_switch) || !device_is_ready(uart_dev))
    {
        return 0;
    }
    k_work_init(&send, sendmsg);
    k_event_init(&onreset);

    gpio_pin_configure_dt(&driver_switch, GPIO_OUTPUT_ACTIVE); // set rs as output and make it transmit mode(value of 1)
    uart_irq_callback_user_data_set(uart_dev, getmsg, NULL);
    uart_irq_rx_enable(uart_dev);

    while (1)
    {
        if (k_event_wait(&onreset, BIT(0), true, K_MSEC(2000)) == 0)
        {
            prt_uart(msgout);
            k_msleep(200);
            gpio_pin_set_dt(&driver_switch, REC); // set rs to receive mode
        }
    }
}
