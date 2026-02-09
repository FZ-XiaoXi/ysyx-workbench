#include <am.h>
#include <nemu.h>
#include <klib.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int code = inl(KBD_ADDR);
  printf("CODE=%08x\n",code);
  kbd->keydown = false;
  kbd->keycode = AM_KEY_NONE;
  // kbd->keydown = (code!=AM_KEY_NONE)?true:false;
  // kbd->keycode = code;
}
