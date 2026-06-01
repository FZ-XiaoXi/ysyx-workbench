#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

// static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  assert(0);

  return NULL;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
    assert(0);


  return false;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  assert(0);
  // Context *sp = (Context *)kstack.end;
  // sp--;
  // sp->mepc = (uintptr_t)entry;
  // sp->mstatus = 0x1800;
  // sp->gpr[10] = (uintptr_t)arg;
  return NULL;
}

void yield() {
  assert(0);
// #ifdef __riscv_e
//   asm volatile("li a5, -1; ecall");
// #else
//   asm volatile("li a7, -1; ecall");
// #endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
