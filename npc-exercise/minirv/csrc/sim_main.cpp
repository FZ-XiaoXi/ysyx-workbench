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
int i=0;
uint32_t sPC=0;
int pmem_read(int raddr){
	// 总是读取地址为`raddr & ~0x3u`的4字节返回
	return MEM[raddr>>2];
}
void pmem_write(int waddr, int wdata, char wmask) {
	wmask=wmask<<(waddr&0x03);
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
	MEM[waddr>>2]=(MEM[waddr>>2]&0x00ffffff)|((((wmask>>3)&0x1)?((wdata>>24)&0xff):((MEM[waddr>>2]>>24)&0xff))<<24);
	MEM[waddr>>2]=(MEM[waddr>>2]&0xff00ffff)|((((wmask>>2)&0x1)?((wdata>>16)&0xff):((MEM[waddr>>2]>>16)&0xff))<<16);
	MEM[waddr>>2]=(MEM[waddr>>2]&0xffff00ff)|((((wmask>>1)&0x1)?((wdata>> 8)&0xff):((MEM[waddr>>2]>> 8)&0xff))<< 8);
	MEM[waddr>>2]=(MEM[waddr>>2]&0xffffff00)|((((wmask>>0)&0x1)?((wdata>> 0)&0xff):((MEM[waddr>>2]>> 0)&0xff))<< 0);
}
void setmem(){
	memset(MEM,0,MAX_PC*4);
	///////  ///////\\\\\-----===
	MEM[0]=0b00000000100000000000000010010011;//addi r1,r0,8
	MEM[1]=0b00000000001000001000000100010011;//addi r2,r1,2
	MEM[2]=0b00000000000100010000000110110011;//add  r3,r1,r2
	MEM[3]=0b00000000000000000111000110110111;//lui  r3,0x7000
	MEM[4]=0b00010001000100011000001000010011;//addi r4,r3,0x111
	MEM[5]=0b00000000010000000010000010000011;//lw   r1,4(r0)
	MEM[6]=0b00000000001000000100000100000011;//lbu  r2,+2(r0)
	MEM[7]=0b00000000001000000000000110000011;//lb   r3,+2(r0)
	MEM[8]=0b00000000000100000000000001110011;//ebreak
	//MEM[]=0b11111111110000001000000011100111;//jalr r1,-4(r1)
	// MEM[0]=0x01400513;
	// MEM[1]=0x010000e7;
	// MEM[2]=0x00c000e7;
	// MEM[3]=0b00000000000100000000000001110011;
	// MEM[4]=0x00a50513;
	// MEM[5]=0x00008067;
}
void ebreak(){
	//printf("STOOOOOOOOOOOOOOOOP!");
	isEBREAK=1;
}

void onecyc(VerilatedContext* contextp,Vtop* top){
	i++;
	top->eval();
	if(i<99999) return;
	i=0;
	sPC=top->PC;
	//top->PC_command=pmem_read(top->PC);
	//top->LSU_readdata=pmem_read(top->LSU_address);
	//pmem_write(top->clk,top->LSU_address,top->LSU_writedata,top->LSU_rmask,top->LSU_WEN);
	
	top->clk=1;
	top->eval();
	contextp->timeInc(5);
	
	top->clk=0;
	top->eval();
	contextp->timeInc(5);
	
	
	for(int i=0;i<16;i++) printf("[%2d]:%04x ",i,top->GPRTEST[i]);
	printf("\n");
	printf("PC:%04x ",sPC);
	printf("CMD:%08x | ",top->PC_command);
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
	
	while (!contextp->gotFinish()&&isEBREAK==0) {
		onecyc(contextp,top);
	}
    delete top;
    delete contextp;
    return 0;
}

