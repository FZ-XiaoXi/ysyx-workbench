#ifndef __FTRACE__
#define __FTRACE__
#include <common.h>
typedef struct {
  char name[64];
  vaddr_t start_add;
  vaddr_t size;
} symtab_t;

typedef struct {
    vaddr_t src_pc;
    vaddr_t dst_pc;
    symtab_t *dst_func;
} ftracer_t;

typedef struct {
    int depth;
    bool is_ftrace;
    int symtab_size;
    ftracer_t* stack;
} ftracer_stack_t;

int ftracer_push(ftracer_t stack);
void ftracer_pop();


#define IN_FUNCRANGE(add,symtab) ((add>=symtab.start_add && add<symtab.start_add+symtab.size)?1:0)

#endif