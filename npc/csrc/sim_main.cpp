#include "Vencode42.h"
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <assert.h>
#include "verilated.h"
Vencode42* top;
VerilatedVcdC* tfp = new VerilatedVcdC;
VerilatedContext* contextp = new VerilatedContext;
void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

int main(int argc, char** argv) {
    contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
    top = new Vencode42{contextp};
	top->trace(tfp,99);
	tfp->open("wave.vcd");
	top->en=0b0;
	top->x=0b1111;step_and_dump_wave();
	for(int j=0;j<4;j++){
		top->x = top->x << 1;step_and_dump_wave();
	}
	top->x=0b1111;step_and_dump_wave();
	for(int j=0;j<4;j++){
		top->x = (unsigned)(top->x) >> 1;step_and_dump_wave();
	}
	top->en=0b1;
	top->x=0b1111;step_and_dump_wave();
	for(int j=0;j<4;j++){
		top->x = top->x << 1;step_and_dump_wave();
	}
	top->x=0b1111;step_and_dump_wave();
	for(int j=0;j<4;j++){
		top->x = (unsigned)(top->x) >> 1;step_and_dump_wave();
	}
	step_and_dump_wave();
	
	
	while (0) {
	//while (!contextp->gotFinish()) {
		//top->a=a;
		//top->b=b;
		tfp->dump(contextp->time());
		contextp->timeInc(10);
		//printf("a=%d b=%d f=%d\n",a,b,top->f);
		//assert(top->f == (a^b));
	}
	tfp->close();
    delete top;
    delete contextp;
    return 0;
}
