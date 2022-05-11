#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

     LAYOUT(
          KC_ESC, KC_BTN2, KC_UP, KC_BTN1,
          KC_LSFT, KC_RGHT, KC_DOWN, KC_LEFT,
          MO(1), KC_SPC),

     LAYOUT(
          KC_MY_COMPUTER, KC_MNXT, KC_MPLY, KC_MPRV,
          KC_WWW_HOME, KC_MUTE, KC_VOLU, KC_VOLD,
          KC_TRNS, KC_ENT)

};
