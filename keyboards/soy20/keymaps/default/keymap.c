#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     [0] = LAYOUT_ortho_5x4(
          KC_PMNS, KC_PAST, KC_PSLS, MO(1),
          KC_PPLS, KC_P9, KC_P8, KC_P7,
          KC_TAB, KC_P5, KC_P6, KC_P4,
          KC_PENT, KC_P3, KC_P2, KC_P1,
          KC_DEL, KC_SCLN, KC_PDOT, KC_P0),

     [1] = LAYOUT_ortho_5x4(
          KC_NLCK, KC_PSCR, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, RESET),

};
