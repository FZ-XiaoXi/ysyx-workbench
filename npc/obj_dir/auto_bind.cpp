#include <nvboard.h>
#include "VALU.h"

void nvboard_bind_all_pins(VALU* top) {
	nvboard_bind_pin( &top->inA, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->inB, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->mode, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->out, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->cin, 1, SW12);
	nvboard_bind_pin( &top->CF, 1, LD4);
	nvboard_bind_pin( &top->ZF, 1, LD5);
	nvboard_bind_pin( &top->OF, 1, LD6);
}
