#include "planck.h"

#ifdef SWAP_HANDS_ENABLE
__attribute__ ((weak))
const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
  {{11, 0}, {10, 0}, {9, 0}, {8, 0}, {7, 0}, {6, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0}},
  {{11, 1}, {10, 1}, {9, 1}, {8, 1}, {7, 1}, {6, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1}},
  {{11, 2}, {10, 2}, {9, 2}, {8, 2}, {7, 2}, {6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
  {{11, 3}, {10, 3}, {9, 3}, {8, 3}, {7, 3}, {6, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
};
#endif

__attribute__ ((weak))
void matrix_init_kb(void) {
     // Turn status LED on
     #ifdef __AVR__
     setPinOutput(E6);
     writePinHigh(E6);
     #endif

     matrix_init_user();
}

const uint8_t music_map[MATRIX_ROWS][MATRIX_COLS] = LAYOUT_planck_grid(
     36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
     24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
     12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11
);
