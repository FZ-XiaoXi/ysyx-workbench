#include "VsCPU.h"
#include <unistd.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <assert.h>
#include "verilated.h"
#include <nvboard.h>
VsCPU* top;
void nvboard_bind_all_pins(VsCPU* top);
VerilatedVcdC* tfp = new VerilatedVcdC;
VerilatedContext* contextp = new VerilatedContext;
void step_and_dump_wave(){
  top->eval();
  nvboard_update();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

int main(int argc, char** argv) {
    contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
    top = new VsCPU{contextp};
	top->trace(tfp,99);
	tfp->open("wave.vcd");
	nvboard_bind_all_pins(top);
	nvboard_init();
	

/*
	
*/	
	//while (1) {
	while (!contextp->gotFinish()) {
		//top->a=a;
		//top->b=b;
		top->clk=0;
		step_and_dump_wave();
		tfp->dump(contextp->time());
		contextp->timeInc(10);
		usleep(100000);
		top->clk=1;
		step_and_dump_wave();
		tfp->dump(contextp->time());
		contextp->timeInc(10);
		usleep(100000);
		//printf("a=%d b=%d f=%d\n",a,b,top->f);
		//assert(top->f == (a^b));
	}
	tfp->close();
	nvboard_quit();
    delete top;
    delete contextp;
    return 0;
}
