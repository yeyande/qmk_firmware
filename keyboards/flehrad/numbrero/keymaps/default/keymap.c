#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     LAYOUT_numbrero_numpad(
          KC_TRNS, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
          KC_TRNS, KC_P7,   KC_P8,   KC_P9,
          KC_TRNS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
          KC_TRNS, KC_P1,   KC_P2,   KC_P3,
                   KC_P0,            KC_PDOT, KC_PENT),

     LAYOUT_numbrero_ortho(
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
     return true;
}
