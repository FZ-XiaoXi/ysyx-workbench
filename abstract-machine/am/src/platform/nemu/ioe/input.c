#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int code = inl(KBD_ADDR);
  kbd->keydown = (code!=AM_KEY_NONE)?true:false;
  kbd->keycode = code;
}
