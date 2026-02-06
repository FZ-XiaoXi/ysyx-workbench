#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "verilated.h"

#define MAX_PC 0xffffff
#define pmem_read(add) MEM[add>>2]
uint32_t MEM[MAX_PC];
int isEBREAK=0;
void setmem(){
	memset(MEM,0,MAX_PC*4);
	MEM[0]=0b00000000100000000000000010010011;//addi r1,r0,8
	MEM[1]=0b00000000001000001000000100010011;//addi r2,r1,2
	MEM[2]=0b00000000000100010000000110110011;//add  r3,r1,r2
	MEM[3]=0b00000000000000000111000110110111;//lui  r3,0x7000
	MEM[4]=0b00010001000100011000001000010011;//addi r4,r3,0x111
	MEM[5]=0b00000000000100000000000001110011;//ebreak
	//MEM[]=0b11111111110000001000000011100111;//jalr r1,-4(r1)
	// MEM[0]=0x01400513;
	// MEM[1]=0x010000e7;
	// MEM[2]=0x00c000e7;
	// MEM[3]=0b00000000000100000000000001110011;
	// MEM[4]=0x00a50513;
	// MEM[5]=0x00008067;
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
		top->PC_command=pmem_read(top->PC);
		//top->LSU_readdata=pmem_read(top->LSU_address);
		//pmem_write(top->clk,top->LSU_address,top->LSU_writedata,top->LSU_range,top->LSU_WEN);
		if(top->clk){
			printf("CMD:%08x | ",top->PC_command);
			for(int i=0;i<16;i++) printf("[%2d]:%04x ",i,top->GPRTEST[i]);
			printf("\n");
		}else{
			printf("PC:%04x ",top->PC);
		}
		top->clk=!top->clk;
		top->eval();
		
		contextp->timeInc(5);
	}
    delete top;
    delete contextp;
    return 0;
}

