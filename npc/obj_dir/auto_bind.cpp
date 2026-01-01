#include <nvboard.h>
#include "Vencode42.h"

void nvboard_bind_all_pins(Vencode42* top) {
	nvboard_bind_pin( &top->x, 4, SW0, SW1, SW2, SW3);
	nvboard_bind_pin( &top->y, 2, LD0, LD1);
	nvboard_bind_pin( &top->en, 1, BTNC);
}
