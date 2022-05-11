#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     LAYOUT(
          KC_ESC, KC_BTN1, KC_UP, KC_BTN2,
          KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT,
          MO(1), KC_SPC),

     LAYOUT(
          KC_MY_COMPUTER, KC_MPRV, KC_MPLY, KC_MNXT,
          KC_WWW_HOME, KC_MUTE, KC_VOLD, KC_VOLU,
          KC_TRNS, KC_ENT)

};
