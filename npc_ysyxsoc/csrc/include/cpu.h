#ifndef __CPU_H__
#define __CPU_H__
#include "common.h"
#define CPUTop top->ysyxSoCFull->asic->cpu->cpu
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT } NPCState;

typedef struct{
    uint32_t pc;
    uint32_t dnpc;
    uint32_t halt_ret;
    uint64_t count;
    
    uint8_t ifu_state;
    uint8_t ifu_state_last;
    uint8_t lsu_state;
    uint8_t wbu_state;
    uint8_t wbu_final;
    uint8_t idu_state;
    uint32_t mem_access_addr;
    int state;
    uint32_t gpr[CONFIG_GPR_NUM];
    char logbuf[128];

    uint32_t inst;
    uint64_t counter_inst;
    uint64_t counter_cycle;
    uint64_t counter_IFU_get_inst;
    uint64_t counter_IFU_get_inst_cyc;

    uint64_t counter_IDU_calc;
    uint64_t counter_IDU_mem;
    uint64_t counter_IDU_csr;
    uint64_t counter_IDU_calc_cyc;
    uint64_t counter_IDU_mem_cyc;
    uint64_t counter_IDU_csr_cyc;
    
    uint64_t counter_LSU_load_cyc;
    uint64_t counter_LSU_store_cyc;
    uint64_t counter_LSU_get_data;
    uint64_t counter_LSU_put_data;
    

}CPUState;
extern CPUState cpu;

uint32_t reg_str2val(const char *s, bool *success);
void reg_display(CPUState cpu);
void cpu_exec(uint64_t n);
#endif