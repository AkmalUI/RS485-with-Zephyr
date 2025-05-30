/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_DEVICE_GET_BINDING 0
#define K_SYSCALL_DEVICE_GET_BY_DT_NODELABEL 1
#define K_SYSCALL_DEVICE_INIT 2
#define K_SYSCALL_DEVICE_IS_READY 3
#define K_SYSCALL_GPIO_GET_PENDING_INT 4
#define K_SYSCALL_GPIO_PIN_CONFIGURE 5
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 6
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 7
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 8
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 9
#define K_SYSCALL_GPIO_PORT_GET_RAW 10
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 11
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 12
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 13
#define K_SYSCALL_K_BUSY_WAIT 14
#define K_SYSCALL_K_CONDVAR_BROADCAST 15
#define K_SYSCALL_K_CONDVAR_INIT 16
#define K_SYSCALL_K_CONDVAR_SIGNAL 17
#define K_SYSCALL_K_CONDVAR_WAIT 18
#define K_SYSCALL_K_EVENT_CLEAR 19
#define K_SYSCALL_K_EVENT_INIT 20
#define K_SYSCALL_K_EVENT_POST 21
#define K_SYSCALL_K_EVENT_SET 22
#define K_SYSCALL_K_EVENT_SET_MASKED 23
#define K_SYSCALL_K_EVENT_WAIT 24
#define K_SYSCALL_K_EVENT_WAIT_ALL 25
#define K_SYSCALL_K_FLOAT_DISABLE 26
#define K_SYSCALL_K_FLOAT_ENABLE 27
#define K_SYSCALL_K_FUTEX_WAIT 28
#define K_SYSCALL_K_FUTEX_WAKE 29
#define K_SYSCALL_K_IS_PREEMPT_THREAD 30
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 31
#define K_SYSCALL_K_MSGQ_GET 32
#define K_SYSCALL_K_MSGQ_GET_ATTRS 33
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 34
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 35
#define K_SYSCALL_K_MSGQ_PEEK 36
#define K_SYSCALL_K_MSGQ_PEEK_AT 37
#define K_SYSCALL_K_MSGQ_PURGE 38
#define K_SYSCALL_K_MSGQ_PUT 39
#define K_SYSCALL_K_MUTEX_INIT 40
#define K_SYSCALL_K_MUTEX_LOCK 41
#define K_SYSCALL_K_MUTEX_UNLOCK 42
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 43
#define K_SYSCALL_K_OBJECT_ALLOC 44
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 45
#define K_SYSCALL_K_OBJECT_RELEASE 46
#define K_SYSCALL_K_PIPE_ALLOC_INIT 47
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 48
#define K_SYSCALL_K_PIPE_FLUSH 49
#define K_SYSCALL_K_PIPE_GET 50
#define K_SYSCALL_K_PIPE_PUT 51
#define K_SYSCALL_K_PIPE_READ_AVAIL 52
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 53
#define K_SYSCALL_K_POLL 54
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 55
#define K_SYSCALL_K_POLL_SIGNAL_INIT 56
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 57
#define K_SYSCALL_K_POLL_SIGNAL_RESET 58
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 59
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 60
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 61
#define K_SYSCALL_K_QUEUE_GET 62
#define K_SYSCALL_K_QUEUE_INIT 63
#define K_SYSCALL_K_QUEUE_IS_EMPTY 64
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 65
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 66
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 67
#define K_SYSCALL_K_SEM_COUNT_GET 68
#define K_SYSCALL_K_SEM_GIVE 69
#define K_SYSCALL_K_SEM_INIT 70
#define K_SYSCALL_K_SEM_RESET 71
#define K_SYSCALL_K_SEM_TAKE 72
#define K_SYSCALL_K_SLEEP 73
#define K_SYSCALL_K_STACK_ALLOC_INIT 74
#define K_SYSCALL_K_STACK_POP 75
#define K_SYSCALL_K_STACK_PUSH 76
#define K_SYSCALL_K_STR_OUT 77
#define K_SYSCALL_K_THREAD_ABORT 78
#define K_SYSCALL_K_THREAD_CREATE 79
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 80
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 81
#define K_SYSCALL_K_THREAD_DEADLINE_SET 82
#define K_SYSCALL_K_THREAD_JOIN 83
#define K_SYSCALL_K_THREAD_NAME_COPY 84
#define K_SYSCALL_K_THREAD_NAME_SET 85
#define K_SYSCALL_K_THREAD_PRIORITY_GET 86
#define K_SYSCALL_K_THREAD_PRIORITY_SET 87
#define K_SYSCALL_K_THREAD_RESUME 88
#define K_SYSCALL_K_THREAD_STACK_ALLOC 89
#define K_SYSCALL_K_THREAD_STACK_FREE 90
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 91
#define K_SYSCALL_K_THREAD_START 92
#define K_SYSCALL_K_THREAD_SUSPEND 93
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 94
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 95
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 96
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 97
#define K_SYSCALL_K_TIMER_START 98
#define K_SYSCALL_K_TIMER_STATUS_GET 99
#define K_SYSCALL_K_TIMER_STATUS_SYNC 100
#define K_SYSCALL_K_TIMER_STOP 101
#define K_SYSCALL_K_TIMER_USER_DATA_GET 102
#define K_SYSCALL_K_TIMER_USER_DATA_SET 103
#define K_SYSCALL_K_UPTIME_TICKS 104
#define K_SYSCALL_K_USLEEP 105
#define K_SYSCALL_K_WAKEUP 106
#define K_SYSCALL_K_YIELD 107
#define K_SYSCALL_LOG_BUFFERED_CNT 108
#define K_SYSCALL_LOG_FILTER_SET 109
#define K_SYSCALL_LOG_FRONTEND_FILTER_SET 110
#define K_SYSCALL_LOG_PANIC 111
#define K_SYSCALL_LOG_PROCESS 112
#define K_SYSCALL_RESET_LINE_ASSERT 113
#define K_SYSCALL_RESET_LINE_DEASSERT 114
#define K_SYSCALL_RESET_LINE_TOGGLE 115
#define K_SYSCALL_RESET_STATUS 116
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 117
#define K_SYSCALL_UART_CONFIGURE 118
#define K_SYSCALL_UART_CONFIG_GET 119
#define K_SYSCALL_UART_DRV_CMD 120
#define K_SYSCALL_UART_ERR_CHECK 121
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 122
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 123
#define K_SYSCALL_UART_IRQ_IS_PENDING 124
#define K_SYSCALL_UART_IRQ_RX_DISABLE 125
#define K_SYSCALL_UART_IRQ_RX_ENABLE 126
#define K_SYSCALL_UART_IRQ_TX_DISABLE 127
#define K_SYSCALL_UART_IRQ_TX_ENABLE 128
#define K_SYSCALL_UART_IRQ_UPDATE 129
#define K_SYSCALL_UART_LINE_CTRL_GET 130
#define K_SYSCALL_UART_LINE_CTRL_SET 131
#define K_SYSCALL_UART_POLL_IN 132
#define K_SYSCALL_UART_POLL_IN_U16 133
#define K_SYSCALL_UART_POLL_OUT 134
#define K_SYSCALL_UART_POLL_OUT_U16 135
#define K_SYSCALL_UART_RX_DISABLE 136
#define K_SYSCALL_UART_RX_ENABLE 137
#define K_SYSCALL_UART_RX_ENABLE_U16 138
#define K_SYSCALL_UART_TX 139
#define K_SYSCALL_UART_TX_ABORT 140
#define K_SYSCALL_UART_TX_U16 141
#define K_SYSCALL_ZEPHYR_FPUTC 142
#define K_SYSCALL_ZEPHYR_FWRITE 143
#define K_SYSCALL_ZEPHYR_READ_STDIN 144
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 145
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 146
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 147
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 148
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 149
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 150
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 151
#define K_SYSCALL_BAD 152
#define K_SYSCALL_LIMIT 153


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 154
#define K_SYSCALL_ADC_READ 155
#define K_SYSCALL_ADC_READ_ASYNC 156
#define K_SYSCALL_ATOMIC_ADD 157
#define K_SYSCALL_ATOMIC_AND 158
#define K_SYSCALL_ATOMIC_CAS 159
#define K_SYSCALL_ATOMIC_NAND 160
#define K_SYSCALL_ATOMIC_OR 161
#define K_SYSCALL_ATOMIC_PTR_CAS 162
#define K_SYSCALL_ATOMIC_PTR_SET 163
#define K_SYSCALL_ATOMIC_SET 164
#define K_SYSCALL_ATOMIC_SUB 165
#define K_SYSCALL_ATOMIC_XOR 166
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 167
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 168
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 169
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 170
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 171
#define K_SYSCALL_AUXDISPLAY_CLEAR 172
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 173
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 174
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 175
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 176
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 177
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 178
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 179
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 180
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 181
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 182
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 183
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 184
#define K_SYSCALL_AUXDISPLAY_WRITE 185
#define K_SYSCALL_BBRAM_CHECK_INVALID 186
#define K_SYSCALL_BBRAM_CHECK_POWER 187
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 188
#define K_SYSCALL_BBRAM_GET_SIZE 189
#define K_SYSCALL_BBRAM_READ 190
#define K_SYSCALL_BBRAM_WRITE 191
#define K_SYSCALL_BC12_SET_RESULT_CB 192
#define K_SYSCALL_BC12_SET_ROLE 193
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 194
#define K_SYSCALL_CAN_CALC_TIMING 195
#define K_SYSCALL_CAN_CALC_TIMING_DATA 196
#define K_SYSCALL_CAN_GET_BITRATE_MAX 197
#define K_SYSCALL_CAN_GET_BITRATE_MIN 198
#define K_SYSCALL_CAN_GET_CAPABILITIES 199
#define K_SYSCALL_CAN_GET_CORE_CLOCK 200
#define K_SYSCALL_CAN_GET_MAX_FILTERS 201
#define K_SYSCALL_CAN_GET_MODE 202
#define K_SYSCALL_CAN_GET_STATE 203
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 204
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 205
#define K_SYSCALL_CAN_GET_TIMING_MAX 206
#define K_SYSCALL_CAN_GET_TIMING_MIN 207
#define K_SYSCALL_CAN_GET_TRANSCEIVER 208
#define K_SYSCALL_CAN_RECOVER 209
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 210
#define K_SYSCALL_CAN_SEND 211
#define K_SYSCALL_CAN_SET_BITRATE 212
#define K_SYSCALL_CAN_SET_BITRATE_DATA 213
#define K_SYSCALL_CAN_SET_MODE 214
#define K_SYSCALL_CAN_SET_TIMING 215
#define K_SYSCALL_CAN_SET_TIMING_DATA 216
#define K_SYSCALL_CAN_START 217
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 218
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 219
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 220
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 221
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 222
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 223
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 224
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 225
#define K_SYSCALL_CAN_STOP 226
#define K_SYSCALL_CHARGER_CHARGE_ENABLE 227
#define K_SYSCALL_CHARGER_GET_PROP 228
#define K_SYSCALL_CHARGER_SET_PROP 229
#define K_SYSCALL_COMPARATOR_GET_OUTPUT 230
#define K_SYSCALL_COMPARATOR_SET_TRIGGER 231
#define K_SYSCALL_COMPARATOR_TRIGGER_IS_PENDING 232
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 233
#define K_SYSCALL_COUNTER_GET_FREQUENCY 234
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 235
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 236
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 237
#define K_SYSCALL_COUNTER_GET_PENDING_INT 238
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 239
#define K_SYSCALL_COUNTER_GET_VALUE 240
#define K_SYSCALL_COUNTER_GET_VALUE_64 241
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 242
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 243
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 244
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 245
#define K_SYSCALL_COUNTER_START 246
#define K_SYSCALL_COUNTER_STOP 247
#define K_SYSCALL_COUNTER_TICKS_TO_US 248
#define K_SYSCALL_COUNTER_US_TO_TICKS 249
#define K_SYSCALL_DAC_CHANNEL_SETUP 250
#define K_SYSCALL_DAC_WRITE_VALUE 251
#define K_SYSCALL_DEVMUX_SELECT_GET 252
#define K_SYSCALL_DEVMUX_SELECT_SET 253
#define K_SYSCALL_DMA_CHAN_FILTER 254
#define K_SYSCALL_DMA_RELEASE_CHANNEL 255
#define K_SYSCALL_DMA_REQUEST_CHANNEL 256
#define K_SYSCALL_DMA_RESUME 257
#define K_SYSCALL_DMA_START 258
#define K_SYSCALL_DMA_STOP 259
#define K_SYSCALL_DMA_SUSPEND 260
#define K_SYSCALL_EEPROM_GET_SIZE 261
#define K_SYSCALL_EEPROM_READ 262
#define K_SYSCALL_EEPROM_WRITE 263
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 264
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 265
#define K_SYSCALL_ENTROPY_GET_ENTROPY 266
#define K_SYSCALL_ESPI_CONFIG 267
#define K_SYSCALL_ESPI_FLASH_ERASE 268
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 269
#define K_SYSCALL_ESPI_READ_FLASH 270
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 271
#define K_SYSCALL_ESPI_READ_REQUEST 272
#define K_SYSCALL_ESPI_RECEIVE_OOB 273
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 274
#define K_SYSCALL_ESPI_SAF_ACTIVATE 275
#define K_SYSCALL_ESPI_SAF_CONFIG 276
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 277
#define K_SYSCALL_ESPI_SAF_FLASH_READ 278
#define K_SYSCALL_ESPI_SAF_FLASH_UNSUCCESS 279
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 280
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 281
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 282
#define K_SYSCALL_ESPI_SEND_OOB 283
#define K_SYSCALL_ESPI_SEND_VWIRE 284
#define K_SYSCALL_ESPI_WRITE_FLASH 285
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 286
#define K_SYSCALL_ESPI_WRITE_REQUEST 287
#define K_SYSCALL_FLASH_COPY 288
#define K_SYSCALL_FLASH_ERASE 289
#define K_SYSCALL_FLASH_EX_OP 290
#define K_SYSCALL_FLASH_FILL 291
#define K_SYSCALL_FLASH_FLATTEN 292
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 293
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 294
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 295
#define K_SYSCALL_FLASH_GET_PARAMETERS 296
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 297
#define K_SYSCALL_FLASH_READ 298
#define K_SYSCALL_FLASH_READ_JEDEC_ID 299
#define K_SYSCALL_FLASH_SFDP_READ 300
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 301
#define K_SYSCALL_FLASH_WRITE 302
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 303
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 304
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 305
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 306
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 307
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 308
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 309
#define K_SYSCALL_GNSS_GET_FIX_RATE 310
#define K_SYSCALL_GNSS_GET_LATEST_TIMEPULSE 311
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 312
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 313
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 314
#define K_SYSCALL_GNSS_SET_FIX_RATE 315
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 316
#define K_SYSCALL_HAPTICS_START_OUTPUT 317
#define K_SYSCALL_HAPTICS_STOP_OUTPUT 318
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 319
#define K_SYSCALL_HWINFO_GET_DEVICE_EUI64 320
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 321
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 322
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 323
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 324
#define K_SYSCALL_HWSPINLOCK_LOCK 325
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 326
#define K_SYSCALL_HWSPINLOCK_UNLOCK 327
#define K_SYSCALL_I2C_CONFIGURE 328
#define K_SYSCALL_I2C_GET_CONFIG 329
#define K_SYSCALL_I2C_RECOVER_BUS 330
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 331
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 332
#define K_SYSCALL_I2C_TRANSFER 333
#define K_SYSCALL_I2S_BUF_READ 334
#define K_SYSCALL_I2S_BUF_WRITE 335
#define K_SYSCALL_I2S_CONFIGURE 336
#define K_SYSCALL_I2S_TRIGGER 337
#define K_SYSCALL_I3C_DO_CCC 338
#define K_SYSCALL_I3C_TRANSFER 339
#define K_SYSCALL_IPM_COMPLETE 340
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 341
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 342
#define K_SYSCALL_IPM_SEND 343
#define K_SYSCALL_IPM_SET_ENABLED 344
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 345
#define K_SYSCALL_IVSHMEM_GET_ID 346
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 347
#define K_SYSCALL_IVSHMEM_GET_MEM 348
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 349
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 350
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 351
#define K_SYSCALL_IVSHMEM_GET_STATE 352
#define K_SYSCALL_IVSHMEM_GET_VECTORS 353
#define K_SYSCALL_IVSHMEM_INT_PEER 354
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 355
#define K_SYSCALL_IVSHMEM_SET_STATE 356
#define K_SYSCALL_KSCAN_CONFIG 357
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 358
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 359
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 360
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 361
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 362
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 363
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 364
#define K_SYSCALL_LED_BLINK 365
#define K_SYSCALL_LED_GET_INFO 366
#define K_SYSCALL_LED_OFF 367
#define K_SYSCALL_LED_ON 368
#define K_SYSCALL_LED_SET_BRIGHTNESS 369
#define K_SYSCALL_LED_SET_CHANNEL 370
#define K_SYSCALL_LED_SET_COLOR 371
#define K_SYSCALL_LED_WRITE_CHANNELS 372
#define K_SYSCALL_LLEXT_GET_FN_TABLE 373
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 374
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 375
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 376
#define K_SYSCALL_MBOX_MTU_GET 377
#define K_SYSCALL_MBOX_SEND 378
#define K_SYSCALL_MBOX_SET_ENABLED 379
#define K_SYSCALL_MDIO_BUS_DISABLE 380
#define K_SYSCALL_MDIO_BUS_ENABLE 381
#define K_SYSCALL_MDIO_READ 382
#define K_SYSCALL_MDIO_READ_C45 383
#define K_SYSCALL_MDIO_WRITE 384
#define K_SYSCALL_MDIO_WRITE_C45 385
#define K_SYSCALL_MSPI_CONFIG 386
#define K_SYSCALL_MSPI_DEV_CONFIG 387
#define K_SYSCALL_MSPI_GET_CHANNEL_STATUS 388
#define K_SYSCALL_MSPI_SCRAMBLE_CONFIG 389
#define K_SYSCALL_MSPI_TIMING_CONFIG 390
#define K_SYSCALL_MSPI_TRANSCEIVE 391
#define K_SYSCALL_MSPI_XIP_CONFIG 392
#define K_SYSCALL_NET_ADDR_NTOP 393
#define K_SYSCALL_NET_ADDR_PTON 394
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 395
#define K_SYSCALL_NET_IF_GET_BY_INDEX 396
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 397
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 398
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 399
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 400
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_ADDR_BY_INDEX 401
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 402
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 403
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 404
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 405
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 406
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 407
#define K_SYSCALL_PECI_CONFIG 408
#define K_SYSCALL_PECI_DISABLE 409
#define K_SYSCALL_PECI_ENABLE 410
#define K_SYSCALL_PECI_TRANSFER 411
#define K_SYSCALL_PS2_CONFIG 412
#define K_SYSCALL_PS2_DISABLE_CALLBACK 413
#define K_SYSCALL_PS2_ENABLE_CALLBACK 414
#define K_SYSCALL_PS2_READ 415
#define K_SYSCALL_PS2_WRITE 416
#define K_SYSCALL_PTP_CLOCK_GET 417
#define K_SYSCALL_PWM_CAPTURE_CYCLES 418
#define K_SYSCALL_PWM_DISABLE_CAPTURE 419
#define K_SYSCALL_PWM_ENABLE_CAPTURE 420
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 421
#define K_SYSCALL_PWM_SET_CYCLES 422
#define K_SYSCALL_RETAINED_MEM_CLEAR 423
#define K_SYSCALL_RETAINED_MEM_READ 424
#define K_SYSCALL_RETAINED_MEM_SIZE 425
#define K_SYSCALL_RETAINED_MEM_WRITE 426
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 427
#define K_SYSCALL_RTC_ALARM_GET_TIME 428
#define K_SYSCALL_RTC_ALARM_IS_PENDING 429
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 430
#define K_SYSCALL_RTC_ALARM_SET_TIME 431
#define K_SYSCALL_RTC_GET_CALIBRATION 432
#define K_SYSCALL_RTC_GET_TIME 433
#define K_SYSCALL_RTC_SET_CALIBRATION 434
#define K_SYSCALL_RTC_SET_TIME 435
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 436
#define K_SYSCALL_RTIO_CQE_COPY_OUT 437
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 438
#define K_SYSCALL_RTIO_RELEASE_BUFFER 439
#define K_SYSCALL_RTIO_SQE_CANCEL 440
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 441
#define K_SYSCALL_RTIO_SUBMIT 442
#define K_SYSCALL_SDHC_CARD_BUSY 443
#define K_SYSCALL_SDHC_CARD_PRESENT 444
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 445
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 446
#define K_SYSCALL_SDHC_EXECUTE_TUNING 447
#define K_SYSCALL_SDHC_GET_HOST_PROPS 448
#define K_SYSCALL_SDHC_HW_RESET 449
#define K_SYSCALL_SDHC_REQUEST 450
#define K_SYSCALL_SDHC_SET_IO 451
#define K_SYSCALL_SENSOR_ATTR_GET 452
#define K_SYSCALL_SENSOR_ATTR_SET 453
#define K_SYSCALL_SENSOR_CHANNEL_GET 454
#define K_SYSCALL_SENSOR_GET_DECODER 455
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 456
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 457
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 458
#define K_SYSCALL_SIP_SUPERVISORY_CALL 459
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 460
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 461
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 462
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 463
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 464
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 465
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 466
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 467
#define K_SYSCALL_SMBUS_BLOCK_PCALL 468
#define K_SYSCALL_SMBUS_BLOCK_READ 469
#define K_SYSCALL_SMBUS_BLOCK_WRITE 470
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 471
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 472
#define K_SYSCALL_SMBUS_BYTE_READ 473
#define K_SYSCALL_SMBUS_BYTE_WRITE 474
#define K_SYSCALL_SMBUS_CONFIGURE 475
#define K_SYSCALL_SMBUS_GET_CONFIG 476
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 477
#define K_SYSCALL_SMBUS_PCALL 478
#define K_SYSCALL_SMBUS_QUICK 479
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 480
#define K_SYSCALL_SMBUS_WORD_DATA_READ 481
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 482
#define K_SYSCALL_SPI_RELEASE 483
#define K_SYSCALL_SPI_TRANSCEIVE 484
#define K_SYSCALL_STEPPER_ENABLE 485
#define K_SYSCALL_STEPPER_ENABLE_CONSTANT_VELOCITY_MODE 486
#define K_SYSCALL_STEPPER_GET_ACTUAL_POSITION 487
#define K_SYSCALL_STEPPER_GET_MICRO_STEP_RES 488
#define K_SYSCALL_STEPPER_IS_MOVING 489
#define K_SYSCALL_STEPPER_MOVE 490
#define K_SYSCALL_STEPPER_SET_ACTUAL_POSITION 491
#define K_SYSCALL_STEPPER_SET_CALLBACK 492
#define K_SYSCALL_STEPPER_SET_MAX_VELOCITY 493
#define K_SYSCALL_STEPPER_SET_MICRO_STEP_RES 494
#define K_SYSCALL_STEPPER_SET_TARGET_POSITION 495
#define K_SYSCALL_SYSCON_GET_BASE 496
#define K_SYSCALL_SYSCON_GET_SIZE 497
#define K_SYSCALL_SYSCON_READ_REG 498
#define K_SYSCALL_SYSCON_WRITE_REG 499
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 500
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 501
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 502
#define K_SYSCALL_SYS_CSRAND_GET 503
#define K_SYSCALL_SYS_RAND_GET 504
#define K_SYSCALL_TEE_CANCEL 505
#define K_SYSCALL_TEE_CLOSE_SESSION 506
#define K_SYSCALL_TEE_GET_VERSION 507
#define K_SYSCALL_TEE_INVOKE_FUNC 508
#define K_SYSCALL_TEE_OPEN_SESSION 509
#define K_SYSCALL_TEE_SHM_ALLOC 510
#define K_SYSCALL_TEE_SHM_FREE 511
#define K_SYSCALL_TEE_SHM_REGISTER 512
#define K_SYSCALL_TEE_SHM_UNREGISTER 513
#define K_SYSCALL_TEE_SUPPL_RECV 514
#define K_SYSCALL_TEE_SUPPL_SEND 515
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 516
#define K_SYSCALL_TGPIO_PIN_DISABLE 517
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 518
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 519
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 520
#define K_SYSCALL_TGPIO_PORT_GET_TIME 521
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 522
#define K_SYSCALL_UPDATEHUB_CONFIRM 523
#define K_SYSCALL_UPDATEHUB_PROBE 524
#define K_SYSCALL_UPDATEHUB_REBOOT 525
#define K_SYSCALL_UPDATEHUB_UPDATE 526
#define K_SYSCALL_USER_FAULT 527
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 528
#define K_SYSCALL_W1_CONFIGURE 529
#define K_SYSCALL_W1_GET_SLAVE_COUNT 530
#define K_SYSCALL_W1_READ_BIT 531
#define K_SYSCALL_W1_READ_BLOCK 532
#define K_SYSCALL_W1_READ_BYTE 533
#define K_SYSCALL_W1_RESET_BUS 534
#define K_SYSCALL_W1_SEARCH_BUS 535
#define K_SYSCALL_W1_WRITE_BIT 536
#define K_SYSCALL_W1_WRITE_BLOCK 537
#define K_SYSCALL_W1_WRITE_BYTE 538
#define K_SYSCALL_WDT_DISABLE 539
#define K_SYSCALL_WDT_FEED 540
#define K_SYSCALL_WDT_SETUP 541
#define K_SYSCALL_XTENSA_USER_FAULT 542
#define K_SYSCALL_ZSOCK_ACCEPT 543
#define K_SYSCALL_ZSOCK_BIND 544
#define K_SYSCALL_ZSOCK_CLOSE 545
#define K_SYSCALL_ZSOCK_CONNECT 546
#define K_SYSCALL_ZSOCK_FCNTL_IMPL 547
#define K_SYSCALL_ZSOCK_GETHOSTNAME 548
#define K_SYSCALL_ZSOCK_GETPEERNAME 549
#define K_SYSCALL_ZSOCK_GETSOCKNAME 550
#define K_SYSCALL_ZSOCK_GETSOCKOPT 551
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 552
#define K_SYSCALL_ZSOCK_INET_PTON 553
#define K_SYSCALL_ZSOCK_IOCTL_IMPL 554
#define K_SYSCALL_ZSOCK_LISTEN 555
#define K_SYSCALL_ZSOCK_RECVFROM 556
#define K_SYSCALL_ZSOCK_RECVMSG 557
#define K_SYSCALL_ZSOCK_SENDMSG 558
#define K_SYSCALL_ZSOCK_SENDTO 559
#define K_SYSCALL_ZSOCK_SETSOCKOPT 560
#define K_SYSCALL_ZSOCK_SHUTDOWN 561
#define K_SYSCALL_ZSOCK_SOCKET 562
#define K_SYSCALL_ZSOCK_SOCKETPAIR 563
#define K_SYSCALL_ZVFS_POLL 564
#define K_SYSCALL_ZVFS_SELECT 565
#define K_SYSCALL_Z_ERRNO 566
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 567


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
