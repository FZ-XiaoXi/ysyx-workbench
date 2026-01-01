#include <nvboard.h>
#include "Vencode83.h"

void nvboard_bind_all_pins(Vencode83* top) {
	nvboard_bind_pin( &top->y, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->s, 1, LD4);
	nvboard_bind_pin( &top->x, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW8);
	nvboard_bind_pin( &top->seg, 7, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G);
}
