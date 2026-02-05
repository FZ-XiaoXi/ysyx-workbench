#include "Vtop.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "verilated.h"

#define MAX_PC 0xfffffff
#define pmem_read(pc) MEM[pc>>2]
uint32_t MEM[MAX_PC];


int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
	top->clk=0;
	top->rst=1;
	top->eval();
	contextp->timeInc(10);
	top->clk=0;
	top->rst=0;
	top->eval();
	contextp->timeInc(10);
	while (!contextp->gotFinish()) {
		top->clk=!top->clk;
		top->eval();
		printf("%d %d/%d,%d,%d\n",top->rst,top->clk,top->clk0,top->clk1,top->clk2);
		contextp->timeInc(5);
	}
    delete top;
    delete contextp;
    return 0;
}

