#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "npc.h"
extern char _heap_start;
int main(const char *args);

extern char _sram_start;
#define SRAM_SIZE (8 * 1024 * 1024)
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)

Area heap = RANGE(&_heap_start, SRAM_END);
static const char mainargs[MAINARGS_MAX_LEN] __attribute__((section(".text.mainargs"))) = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  //while(1);
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0" : : "r"(code));
  asm volatile("ebreak");
  while (1);
}

void _trm_init() {
  uint32_t ysyx_name,ysyx_id;
  asm volatile("csrr %0,mvendorid" : "=r"(ysyx_name));
  asm volatile("csrr %0,marchid" : "=r"(ysyx_id));
  // char start_buf_[50];
  // strcpy(start_buf_, "===YSYX:    \n===ID:        \n\0");
  // start_buf_[8] = (char)((ysyx_name>>24)&0xff);
  // start_buf_[9] = (char)((ysyx_name>>16)&0xff);
  // start_buf_[10] = (char)((ysyx_name>>8)&0xff);
  // start_buf_[11] = (char)((ysyx_name)&0xff);
  // start_buf_[19] = (char)((ysyx_id / 10000000) + '0');
  // putstr(start_buf_);
  
  // printf("===YSYX:%c%c%c%c\n",(ysyx_name>>24)&0xff,(ysyx_name>>16)&0xff,(ysyx_name>>8)&0xff,ysyx_name&0xff);
  // printf("===ID:%d\n",ysyx_id);
  int ret = main(mainargs);
  halt(ret);
}
