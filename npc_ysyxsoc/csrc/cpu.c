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
	cpu.dnpc = CPUTop->PC;
	for(int i=0;i<CONFIG_GPR_NUM;i++){
		cpu.gpr[i] = CPUTop->REG_0->GPR[i];
	}
}

static void cpu_exec_once(){
	top->clock=1;
	top->eval();
	#ifdef CONFIG_WAVE_ENABLE
	// if(cpu.count > 4450000) DUMP();
	DUMP();
	#endif
	contextp->timeInc(1);
	
	top->clock=0;
	top->eval();
	#ifdef CONFIG_WAVE_ENABLE
	// if(cpu.count > 4450000) DUMP();
	DUMP();
	#endif
	contextp->timeInc(1);
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
	
	while(cpu.ifu_state != 0 || CPUTop->reset){
		cpu_exec_once();
	}
	int this_cnt = 0;
	static uint64_t cyc_cnt = 0;
	while(n > 0){
		cpu_exec_once();

		cpu.counter_cycle++;
		this_cnt++;

		#ifdef CONFIG_NVBOARD_ENABLE
			nvboard_update();
		#endif
		
		// if(this_cnt > 2000){
		// 	cpu_get_reg();
		// 	Log("cpu.count = %lu, this_cnt = %d, current pc = " FMT_WORD, cpu.count, this_cnt, cpu.pc);
		// 	while(1);
		// 	// if(cpu.pc == 0x00000044) while(1);
		// }
		// cpu.lsu_state = CPUTop->LSU_0->state;
		cpu.ifu_state = CPUTop->IFU_0->state;
		// cpu.idu_state = CPUTop->IDU_0->state;
		uint8_t reset_state = CPUTop->reset;
		cpu_get_reg();
		static uint8_t ifu_rfire=0,ifu_rfire_last=0;
		ifu_rfire_last = ifu_rfire;
		ifu_rfire = CPUTop->IFU_0->r_fire;
		uint8_t bus_valid = CPUTop->IFU_0->bus_valid;

		if(bus_valid){
			if(CPUTop->IDU_0->isLOAD){
				cpu.counter_IDU_mem_cyc++;
				if(CPUTop->LSU_0->state!=0){
					cpu.counter_LSU_load_cyc++;	
				}
			}
			if(CPUTop->IDU_0->isSTORE){
				cpu.counter_IDU_mem_cyc++;
				if(CPUTop->LSU_0->state!=0){
					cpu.counter_LSU_store_cyc++;	
				}
			}
			if(CPUTop->IDU_0->isCSR){
				cpu.counter_IDU_csr_cyc++;
			}
			if(CPUTop->IDU_0->isWRITE | CPUTop->IDU_0->isPC | CPUTop->IDU_0->isB){
				cpu.counter_IDU_calc_cyc++;
			}

		}else{
			cpu.counter_IFU_get_inst_cyc++;

		}
		if(ifu_rfire){
			cpu.counter_IFU_get_inst++;
			cpu.inst = CPUTop->IFU_0->rdata;
			// Log("IFU get a valid instruction[" FMT_WORD "] at pc = " FMT_WORD , cpu.inst, cpu.pc);
		}
		if(ifu_rfire_last){
			if(CPUTop->IDU_0->isLOAD | CPUTop->IDU_0->isSTORE){
				cpu.counter_IDU_mem++;
				// Log("IDU is executing a memory instruction at pc = " FMT_WORD , cpu.pc);
			}
			if(CPUTop->IDU_0->isCSR){
				cpu.counter_IDU_csr++;
				// Log("IDU is executing a CSR instruction at pc = " FMT_WORD , cpu.pc);
			}
			if(CPUTop->IDU_0->isWRITE | CPUTop->IDU_0->isPC | CPUTop->IDU_0->isB){
				cpu.counter_IDU_calc++;
				// Log("IDU is executing a CSR instruction at pc = " FMT_WORD , cpu.pc);
			}
		}
		
		if(CPUTop->LSU_0->b_fire){
			cpu.counter_LSU_put_data++;
			// Log("LSU put a valid data at pc = " FMT_WORD , cpu.pc);
		}
		if(CPUTop->LSU_0->r_fire){
			cpu.counter_LSU_get_data++;
			// Log("LSU get a valid data at pc = " FMT_WORD , cpu.pc);
		}
		
		// Log("LSU state = %d, IFU state = %d, IDU state = %d at pc = " FMT_WORD, cpu.lsu_state, cpu.ifu_state, cpu.idu_state, cpu.pc);
		// Log("LPC = " FMT_WORD,cpu.pc);
		// Log("PC=" FMT_WORD " INST=" FMT_WORD , cpu.pc, cpu.inst);
		
		
		if(cpu.ifu_state == 0 && !reset_state){
			this_cnt = 0;
			// Log("PC=" FMT_WORD , cpu.pc);
			n--;
			cpu.counter_inst++;
			cpu_get_reg();
			static int cnt = 0;
			if(cnt++==10000){
				Log("[sp=0x%08x][cyc=%ld][inst=%lu][AvgIPC=%.2f] pc = " FMT_WORD,cpu.gpr[2],  cpu.counter_cycle,cpu.counter_inst, (float)cpu.counter_inst/(float)cpu.counter_cycle, cpu.pc);
				Log("[IFUGetInst=%lu cyc%.2f][LSUGetData=%lu cyc%.2f][LSUPutData=%lu cyc%.2f][IDUMem=%lu cyc%.2f][IDUCSR=%lu cyc%.2f][IDUCalc=%lu cyc%.2f] pc = " FMT_WORD,
					cpu.counter_IFU_get_inst, (float)((float)cpu.counter_IFU_get_inst_cyc / (cpu.counter_IFU_get_inst==0?1:(float)cpu.counter_IFU_get_inst)),
					cpu.counter_LSU_get_data,   (float)((float)cpu.counter_LSU_load_cyc / (cpu.counter_LSU_get_data==0?1:(float)cpu.counter_LSU_get_data)),
					cpu.counter_LSU_put_data,  (float)((float)cpu.counter_LSU_store_cyc / (cpu.counter_LSU_put_data==0?1:(float)cpu.counter_LSU_put_data)),
					cpu.counter_IDU_mem,       (float)((float)cpu.counter_IDU_mem_cyc / (cpu.counter_IDU_mem==0?1:(float)cpu.counter_IDU_mem)),
					cpu.counter_IDU_csr, (float)((float)cpu.counter_IDU_csr_cyc / (cpu.counter_IDU_csr==0?1:(float)cpu.counter_IDU_csr)),
					cpu.counter_IDU_calc, (float)((float)cpu.counter_IDU_calc_cyc / (cpu.counter_IDU_calc==0?1:(float)cpu.counter_IDU_calc)),
					cpu.pc);
				cnt=0;
			}
			// Log("%02x %02x %02x %02x at pc = " FMT_WORD ,top->ysyxSoCFull->asic->axi4ram->mem_ext->Memory[1984],top->ysyxSoCFull->asic->axi4ram->mem_ext->Memory[1985],top->ysyxSoCFull->asic->axi4ram->mem_ext->Memory[1986],top->ysyxSoCFull->asic->axi4ram->mem_ext->Memory[1987],cpu.pc);
			// Log("LSR state = %02x LCR state = %02x at pc = " FMT_WORD ,top->ysyxSoCFull->asic->luart->muart->Uregs->lsr,top->ysyxSoCFull->asic->luart->muart->Uregs->lcr,cpu.pc);
			// Log("PSRAM[0x%08x] = 0x%02x at pc = " FMT_WORD ,(uint32_t)(0x80000000),PSRAM((uint32_t)(0x80000000)),cpu.pc);
			// Log("PSRAM[0x%08x] = 0x%02x at pc = " FMT_WORD ,(uint32_t)(0x80000004),PSRAM((uint32_t)(0x80000004)),cpu.pc);
			// Log("PSRAM[0x%08x] = 0x%02x at pc = " FMT_WORD ,(uint32_t)(0x80001236),PSRAM((uint32_t)(0x80001236)),cpu.pc);
			// Log("PSRAM[0x%08x] = 0x%02x at pc = " FMT_WORD ,(uint32_t)(0x80001237),PSRAM((uint32_t)(0x80001237)),cpu.pc);
			// Log("PSRAM[0x%08x] = 0x%04x%04x at pc = " FMT_WORD ,(uint32_t)(0xa0000000),SDRAM01((uint32_t)(0xa0000000)),SDRAM00((uint32_t)(0xa0000000)),cpu.pc);
			
			if(check_mrom_bound(cpu.pc)){
				cpu.inst = FLASH(cpu.pc);
			}else{
				// Log("pc = " FMT_WORD " is out of bound", cpu.pc);
			}
			
			trace_and_difftest();
			cpu.mem_access_addr = 0;
			if(cpu.state != NPC_RUNNING) break;
		}
		else{
			continue;
		}
		// Log("MROM[0]=" FMT_WORD ,MROM[0]);
		// Log("RPC = " FMT_WORD,cpu.pc);

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
    printf("%02d $%s\t" FMT_WORD "\t%d\n",i,regs[i],cpu.gpr[i],cpu.gpr[i]);
  }
  printf("$pc\t" FMT_WORD "\t%d\n",cpu.pc,cpu.pc);
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
	Log("ebreak at pc = " FMT_WORD, cpu.pc);
	cpu.state=NPC_END;
}

void assert_fail_msg() {
  reg_display(cpu);
}

