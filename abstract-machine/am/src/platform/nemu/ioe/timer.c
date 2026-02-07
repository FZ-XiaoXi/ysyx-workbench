#include <am.h>
#include <nemu.h>

void __am_timer_init() {
  //AM_TIMER_CONFIG_T *cfg;
  //__am_timer_config(cfg);
  volatile int t=io_read(AM_TIMER_UPTIME).us;
  (void)t;
  io_write(AM_TIMER_CONFIG, .present = true, .has_rtc = true);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = (uint64_t)(uint32_t)inl(RTC_ADDR);
  uptime->us |= (uint64_t)(uint32_t)inl(RTC_ADDR+4) << 32;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
