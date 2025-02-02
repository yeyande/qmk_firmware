/* Copyright 2019 takashiski
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
               KC_GRAVE, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,             KC_7,  KC_8,  KC_9,  KC_0,  KC_MINUS  ,KC_EQL,KC_JYEN,KC_BSPC,\
               KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,      KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC,KC_RBRC,KC_ENT,
               KC_CAPS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                    KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,KC_NUHS,
               KC_LSHIFT,KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,             KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLASH,KC_RO,KC_RSHIFT,
               KC_LCTRL, KC_LGUI,KC_LALT,KC_MHEN,KC_TAB,KC_SPC,    KC_ENT,KC_BSPC,KC_HENK,KC_KANA,KC_RALT,KC_RGUI,KC_APP,KC_RCTRL
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
