#include <nvboard.h>
#include "VBarrelShifter.h"

void nvboard_bind_all_pins(VBarrelShifter* top) {
	nvboard_bind_pin( &top->din, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->shamt, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->dir, 1, SW12);
	nvboard_bind_pin( &top->mode, 1, SW11);
	nvboard_bind_pin( &top->dout, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
