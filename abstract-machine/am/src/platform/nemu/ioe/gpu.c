#include <am.h>
#include <nemu.h>
#include <klib.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)

static int gpu_w,gpu_h;

void __am_gpu_init() {
  int i;
  int w = (unsigned int)inl(VGACTL_ADDR)>>16;  // TODO: get the correct width
  int h = (unsigned int)inl(VGACTL_ADDR)&0xffff;  // TODO: get the correct height
  gpu_w = w;
  gpu_h = h;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = (unsigned int)inl(VGACTL_ADDR)>>16, .height = (unsigned int)inl(VGACTL_ADDR)&0xffff,
    .vmemsz = gpu_w*gpu_h*4
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) outl(SYNC_ADDR, 1);
  if(ctl->pixels == NULL) return;
  int index=0;
  for(int i=0;i<gpu_w * gpu_h;i++){
    int x=i%gpu_w;
    int y=i/gpu_h;
    if(x>=ctl->x && x < ctl->x+ctl->w){
      if(y>=ctl->y && y<ctl->y+ctl->h){
        outl(FB_ADDR + (i * 4),*((unsigned int*)ctl->pixels + index));
        index++;
      }
      printf("LINE!\n");
    }
  }
  printf("  DISPLAY!\n");
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
