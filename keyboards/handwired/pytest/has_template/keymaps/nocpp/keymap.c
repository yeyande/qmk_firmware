#include QMK_KEYBOARD_H
#include "audio.h"

/* THIS FILE WAS GENERATED AND IS EXPERIMENTAL!
 *
 * This file was generated by qmk-compile-json. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [0] = LAYOUT(KC_ENTER)
};

void encoder_update_user(uint8_t index, bool clockwise) {
     if (index == 0) {
          if (clockwise) {
               tap_code(KC_UP);
          } else {
               tap_code(KC_DOWN);
          }
     }

};
