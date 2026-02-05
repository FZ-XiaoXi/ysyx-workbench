#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "verilated.h"

#define MAX_PC 0xffffff

uint32_t MEM[MAX_PC];

uint32_t mem_read(uint32_t add,uint8_t range){
	return MEM[add>>2];
	return 0;
}
void mem_write(uint8_t clk,uint32_t add,uint32_t wdata,uint8_t range,uint8_t en){
	if(!clk) return;
	if(en) MEM[add>>2]=wdata;
}
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
	memset(MEM,0,MAX_PC*4);
	MEM[0]=00000000001100000000000010010011b;
	top->clk=0;
	top->rst=0;
	top->eval();
	contextp->timeInc(10);
	top->clk=0;
	top->rst=1;
	top->eval();
	contextp->timeInc(10);
	top->clk=0;
	top->rst=0;
	top->eval();
	contextp->timeInc(10);
	int i=0;
	while (!contextp->gotFinish()) {
		i++;
		top->eval();
		if(i<99999) continue;
		i=0;
		top->PC_command=mem_read(top->PC,top->LSU_range);
		top->LSU_readdata=mem_read(top->LSU_address,top->LSU_range);
		mem_write(top->clk,top->LSU_address,top->LSU_writedata,top->LSU_range,top->LSU_WEN);
		printf("%d PC:%x CMD:%x\n",top->clk,top->PC,top->PC_command);
		top->clk=!top->clk;
		top->eval();
		
		contextp->timeInc(5);
	}
    delete top;
    delete contextp;
    return 0;
}

