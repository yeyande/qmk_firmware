#include "centromere.h"

void led_init(void) {
#if MCU == atmega32u2
    setPinOutput(C4); // Set red LED pin as output
    setPinOutput(C5); // Set blue LED pin as output
    setPinOutput(D1); // Set green LED pin as output
    
    writePinHigh(C4); // Turn off red LED pin
    writePinHigh(C5); // Turn off blue LED pin
    writePinHigh(D1); // Turn off green LED pin
    
#else

    setPinOutput(F4); // Set red LED pin as output
    setPinOutput(F5); // Set blue LED pin as output
    setPinOutput(D1); // Set green LED pin as output
    
    writePinHigh(F4); // Turn off red LED pin
    writePinHigh(F5); // Turn off blue LED pin
    writePinHigh(D1); // Turn off green LED pin
    
#endif

}

void matrix_init_kb(void) {
     // put your keyboard start-up code here
     // runs once when the firmware starts up
     matrix_init_user();
     led_init();
}

#ifdef SWAP_HANDS_ENABLE
__attribute__ ((weak))
const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
{{9, 0}, {8, 0}, {7, 0}, {6, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
{{9, 1}, {8, 1}, {7, 1}, {6, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
{{9, 2}, {8, 2}, {7, 2}, {6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
{{9, 3}, {8, 3}, {7, 3}, {6, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
{{9, 4}, {8, 4}, {7, 4}, {6, 4}, {5, 4}, {4, 4}, {3, 4}, {2, 4}, {1, 4}, {0, 4}},
};
#endif
