#include "common.h"
#include "VysyxSoCFull__Dpi.h"
#include "svdpi.h"
#include "cpu.h"
#include "mem.h"
#include "trace.h"
CPUState cpu;
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static void cpu_get_reg(){
	cpu.pc = cpu.dnpc;
	cpu.dnpc = top->ysyxSoCFull->asic->cpu->cpu->PC;
	for(int i=0;i<CONFIG_GPR_NUM;i++){
		cpu.gpr[i] = top->ysyxSoCFull->asic->cpu->cpu->REG_0->GPR[i];
	}
}

static void cpu_exec_once(){
	top->clock=1;
	top->eval();
	#ifdef CONFIG_WAVE_ENABLE
	tfp->dump(contextp->time());
	#endif
	contextp->timeInc(2);
	
	top->clock=0;
	top->eval();
	#ifdef CONFIG_WAVE_ENABLE
	tfp->dump(contextp->time());
	#endif
	contextp->timeInc(2);
}
void cpu_exec(uint64_t n){
	switch (cpu.state)
	{
		case NPC_ABORT:
		case NPC_END:
		case NPC_QUIT:
			printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
			return;
		default:
			cpu.state = NPC_RUNNING;
	}

	while(n > 0){
		cpu_exec_once();
		cpu.lsu_state = top->ysyxSoCFull->asic->cpu->cpu->LSU_0->state;
		cpu.ifu_state = top->ysyxSoCFull->asic->cpu->cpu->IFU_0->state;
		cpu.idu_state = top->ysyxSoCFull->asic->cpu->cpu->IDU_0->state;
		// Log("LSU state = %d, IFU state = %d, IDU state = %d at pc = " FMT_WORD, cpu.lsu_state, cpu.ifu_state, cpu.idu_state, cpu.pc);
		if(cpu.ifu_state != 0) continue;
		else{
			n--;
			cpu.count++;
			cpu_get_reg();
			if(check_pmem_bound(cpu.pc)){
				cpu.inst = pmem_read(cpu.pc);
			}else{
				Log("pc = " FMT_WORD " is out of bound", cpu.pc);
			}
			

			trace_and_difftest();
			cpu.mem_access_addr = 0;
			if(cpu.state != NPC_RUNNING) break;
			
		}
	}
	
	switch (cpu.state)
	{
		case NPC_ABORT:
		case NPC_END: {
			bool success = true;
			cpu.halt_ret = reg_str2val("$a0", &success);
			Assert(success, "Cannot to get the value of '$a0'");
			#ifdef CONFIG_FTRACE_ENABLE
			printf("===\n%s\n===\n",ftrace_log.buf);
			#endif
			Log("npc: %s at pc = " FMT_WORD, \
				(cpu.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) : \
				(cpu.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : \
				ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), \
				cpu.pc);
			Log("Halt code = " FMT_WORD, cpu.halt_ret);
			Log("Total instruction = %lu", cpu.count);
			break;
		}
		case NPC_RUNNING:
			cpu.state = NPC_STOP;
			break;
	}
}


void reg_display(CPUState cpu) {
  for(int i=0;i<CONFIG_GPR_NUM;i++){
    printf("$%s\t%x\t\t%d\n",regs[i],cpu.gpr[i],cpu.gpr[i]);
  }
  printf("$pc\t%x\t\t%d\n",cpu.pc,cpu.pc);
}

uint32_t reg_str2val(const char *s, bool *success) {
  if(s[0]=='$') s++;
  else{
    *success=false;
    return 0;
  }
  if(strcmp(s,"0")==0)  return cpu.gpr[0];
  for(int i=0;i<CONFIG_GPR_NUM;i++){
    if(strcmp(s,regs[i])==0)  return cpu.gpr[i];
  }
  if(strcmp(s,"pc")==0) return cpu.pc;
  *success=false;
  return 0;
}

void ebreak(){
	cpu.state=NPC_END;
}

void assert_fail_msg() {
  reg_display(cpu);
}

