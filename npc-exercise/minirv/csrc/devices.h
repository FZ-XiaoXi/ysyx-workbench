#ifndef __DEVICES_H__
#define __DEVICES_H__

#define DEVICE_BASE 0x10000000
#define CONFIG_SERIAL_MMIO (DEVICE_BASE + 0x00000000)
#define CONFIG_RTC_MMIO (DEVICE_BASE + 0x00000048)

uint64_t get_time();

#endif