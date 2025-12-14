#include "Vtop.h"
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <assert.h>
#include "verilated.h"
#include <nvboard.h>
void nvboard_bind_all_pins(Vtop* top);
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
	Verilated::traceEverOn(true);
    Vtop* top = new Vtop{contextp};
	VerilatedVcdC* tfp = new VerilatedVcdC;
	top->trace(tfp,99);
	tfp->open("wave.vcd");
	nvboard_bind_all_pins(top);
	nvboard_init();
	int a,b;
	while (!contextp->gotFinish()) {
		top->a=a;
		top->b=b;
		top->eval();
		nvboard_update();
		tfp->dump(contextp->time());
		contextp->timeInc(1);
		printf("a=%d b=%d f=%d\n",a,b,top->f);
		assert(top->f == (a^b));
	}
	tfp->close();
    delete top;
    delete contextp;
	nvboard_quit();
    return 0;
}
