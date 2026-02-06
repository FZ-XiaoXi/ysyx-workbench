#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "verilated.h"

#define MAX_PC 0xffffff

uint32_t MEM[MAX_PC];
int isEBREAK=0;

uint32_t mem_read(uint32_t add,uint8_t range){
	return MEM[add>>2];
	return 0;
}
void mem_write(uint8_t clk,uint32_t add,uint32_t wdata,uint8_t range,uint8_t en){
	if(!clk) return;
	if(en) MEM[add>>2]=wdata;
}
void setmem(){
	memset(MEM,0,MAX_PC*4);
	// MEM[0]=0b00000000100000000000000010010011;//addi
	// MEM[1]=0b00000000001100001000000100010011;//addi
	// MEM[2]=0b00000000001100001000000000010011;//addi
	// MEM[3]=0b11111111110000001000000011100111;//jalr
	MEM[0]=0x01400513;
	MEM[1]=0x010000e7;
	MEM[2]=0x00c000e7;
	MEM[3]=0x00c00067;
	MEM[4]=0x00a50513;
	MEM[5]=0x00008067;
}
void ebreak(){
	printf("STOOOOOOOOOOOOOOOOP!");
	isEBREAK=1;
}
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
	setmem();
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
	while (!contextp->gotFinish()&&isEBREAK==0) {
		i++;
		top->eval();
		if(i<99999) continue;
		i=0;
		top->PC_command=mem_read(top->PC,top->LSU_range);
		top->LSU_readdata=mem_read(top->LSU_address,top->LSU_range);
		mem_write(top->clk,top->LSU_address,top->LSU_writedata,top->LSU_range,top->LSU_WEN);
		printf("%d PC:%04x CMD:%08x | ",top->clk,top->PC,top->PC_command);
		for(int i=0;i<16;i++) printf("[%2d]:%d ",i,top->GPRTEST[i]);
		printf("\n");
		top->clk=!top->clk;
		top->eval();
		
		contextp->timeInc(5);
	}
    delete top;
    delete contextp;
    return 0;
}

