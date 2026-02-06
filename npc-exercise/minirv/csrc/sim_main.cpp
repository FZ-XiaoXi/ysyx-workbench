#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "verilated.h"


#define MAX_MEM 0xaffffff
#define _EBREAK 0b00000000000100000000000001110011
uint32_t MEM[MAX_MEM];
int READ=0;
char *IMAGE_NAME;
int isEBREAK=0;
int i=0;
int count=0;
uint32_t sPC=0;
VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
int pmem_read(int raddr){
	raddr=raddr & MAX_MEM;
	// 总是读取地址为`raddr & ~0x3u`的4字节返回
	//printf("\nR: add:%x ",raddr);
	uint32_t s=MEM[raddr>>2];
	//printf("val:%x\n",raddr,s);
	return s;
}
void pmem_write(int waddr, int wdata, char wmask) {
	waddr=waddr & MAX_MEM;
	//printf("\nW: add:%x data:%x mask:%x\n",waddr,wdata,wmask);
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
	memset(MEM,0,MAX_MEM*4);
	
	if(READ==0){
		//MEM[0]=0b00000000100000000000000010010011;//addi r1,r0,8
		//MEM[1]=0b00000000010000001000010001100111;//jalr r8,4(r1)
		MEM[ 0]=0b00000000100000000000000010010011;//addi r1,r0,8
		MEM[ 1]=0b00000000001000001000000100010011;//addi r2,r1,2
		MEM[ 2]=0b00000000000100010000000110110011;//add  r3,r1,r2
		MEM[ 3]=0b00000000000000000111000110110111;//lui  r3,0x7000
		MEM[ 4]=0b00010001000100011000001000010011;//addi r4,r3,0x111
		MEM[ 5]=0b00000000010000000010000010000011;//lw   r1,4(r0)
		MEM[ 6]=0b00000000001000000100000100000011;//lbu  r2,+2(r0)
		MEM[ 7]=0b00000000001000000000000110000011;//lb   r3,+2(r0)
		MEM[ 8]=0b00010000001100000010000000100011;//sw   r3,0x100(r0)
		MEM[ 9]=0b00010000001100000000001100100011;//sb   r3,0x106(r0)
		MEM[10]=0b00010000000000000010001010000011;//lw   r5,0x100(r0)
		MEM[11]=0b00010000010000000010001100000011;//lw   r6,0x104(r0)
		MEM[12]=0b00000000000100000000000001110011;//ebreak
		MEM[13]=0b00000000010000000000010001100111;//jalr r8,4(r0)
		// MEM[0]=0x01400513;
		// MEM[1]=0x010000e7;
		// MEM[2]=0x00c000e7;
		// MEM[3]=0b00000000000100000000000001110011;
		// MEM[4]=0x00a50513;
		// MEM[5]=0x00008067;
	}else{
		FILE *fp=fopen(IMAGE_NAME,"rb");
		if(fp == NULL){
			printf("CANNOT OPEN IMAGE:%s\n",IMAGE_NAME);
			exit(-1);
		}
		printf("OPEN IMAGE:%s\n",IMAGE_NAME);
		uint32_t c;
		uint32_t i=0;
		while(fread(&c,sizeof(uint32_t),1,fp)==1){
			MEM[i]=c;
			i+=1;
		}
		fclose(fp);
		//MEM[0x14>>2]=_EBREAK;
		//MEM[0x1220>>2]=_EBREAK;
		MEM[0x228>>2]=_EBREAK;
	}
	//printf("%x\n%x\n",ROM(0x0),ROM(0x4));
	///////  ///////\\\\\-----===
	
}
void ebreak(){
	//printf("STOOOOOOOOOOOOOOOOP!");
	isEBREAK=1;
	
}

void onecyc(VerilatedContext* contextp,Vtop* top){
	i++;
	top->eval();
	if(i<9999) return;
	i=0;
	sPC=top->PC;
	uint32_t sdPC=top->dnpc;
	uint32_t ssPC=top->snpc;
	uint32_t A=top->EXU_inA;
	uint32_t B=top->EXU_inB;
	uint32_t O=top->EXU_data;
	for(int i=0;i<16;i++) printf("[%2d]:%04x ",i,top->GPRTEST[i]);
	//top->PC_command=pmem_read(top->PC);
	//top->LSU_readdata=pmem_read(top->LSU_address);
	//pmem_write(top->clk,top->LSU_address,top->LSU_writedata,top->LSU_rmask,top->LSU_WEN);
	
	top->clk=1;
	top->eval();
	contextp->timeInc(5);
	
	top->clk=0;
	top->eval();
	contextp->timeInc(5);
	
	count++;
	
	//printf("0x100: %08x 0x104 %08x ",pmem_read(0x100),pmem_read(0x104));
	printf("\n");
	printf("c:%d PC:%04x ",count,sPC);
	printf("CMD:%08x | ",top->PC_command);
}

int main(int argc, char** argv) {
	
	if(argc>=2){
		READ=1;
		IMAGE_NAME=argv[1];
		printf("USE IMAGE:%s\n",IMAGE_NAME);
	}else{
		printf("DEFAULT RUN\n");
	}
    contextp->commandArgs(argc, argv);
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
	for(int i=0;i<16;i++) printf("[%2d]:%04x ",i,top->GPRTEST[i]);
	if(top->GPRTEST[10]==0) printf("\n=====HIT GOOD TRAP!=====\n");
	else printf("\n=====HIT BAD TRAP!=====\n");
    delete top;
    delete contextp;
    return 0;
}

