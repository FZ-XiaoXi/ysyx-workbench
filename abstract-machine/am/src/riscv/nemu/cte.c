#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  // for(int i=0;i<32;i++)
  //   printf("%d %08x\n",i,c->gpr[i]);
  // printf("ca %08x\n",c->mcause);
  // printf("st %08x\n",c->mstatus);
  // printf("pc %08x\n",c->mepc);
  if (user_handler) {
    Event ev = {0};
    uintptr_t syscall_num = c->GPR1;
    switch (c->mcause) {
      case 11:
        if(syscall_num == (uintptr_t)-1){
          ev.event = EVENT_YIELD;
          c->mepc += 4;
        }
        break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
