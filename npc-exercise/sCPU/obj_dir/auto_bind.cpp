#include <nvboard.h>
#include "VsCPU.h"

void nvboard_bind_all_pins(VsCPU* top) {
	nvboard_bind_pin( &top->temp, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->segH, 7, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G);
	nvboard_bind_pin( &top->segL, 7, SEG6A, SEG6B, SEG6C, SEG6D, SEG6E, SEG6F, SEG6G);
	nvboard_bind_pin( &top->clk, 1, SW0);
	nvboard_bind_pin( &top->PC, 4, LD15, LD14, LD13, LD12);
}
