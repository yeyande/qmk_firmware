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

enum layers{
     BASE=0,
     CURSOR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
               KC_GRAVE, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,             KC_6, KC_7,  KC_8,  KC_9,  KC_0,  KC_MINUS  ,KC_EQL,KC_JYEN,KC_BSPC,
               KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,      KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC,KC_RBRC,KC_ENT,
               KC_ESC,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                    KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,KC_NUHS,
               KC_LSHIFT,KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,             KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLASH,KC_RO,KC_RSHIFT,
               KC_LCTRL, KC_LGUI,KC_LALT,KC_MHEN,LT(CURSOR,KC_TAB),KC_SPC,KC_SPC,        LT(CURSOR,KC_SPC),KC_ENT,KC_BSPC,KC_HENK,LT(CURSOR,KC_KANA),KC_RALT,KC_APP,KC_RCTRL
  ),
  [CURSOR] = LAYOUT(
               KC_GRAVE, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,             KC_F6, KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_JYEN,KC_DEL,
               KC_TAB,   KC_Q,  KC_UP,  KC_E,  KC_R,  KC_T,  KC_Y,      KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC,KC_RBRC,KC_PSCR,
               KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_F,  KC_G,                    KC_LEFT,  KC_DOWN,  KC_UP,  KC_RIGHT,  KC_SCLN,  KC_QUOT,KC_NUHS,
               KC_LSHIFT,KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,             KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_END,KC_UP,KC_HOME,
               KC_LCTRL, KC_LGUI,KC_LALT,KC_MHEN,KC_TRNS,KC_SPC,KC_SPC,        KC_TRNS,KC_ENT,KC_BSPC,KC_HENK,KC_TRNS,KC_LEFT,KC_DOWN,KC_RIGHT
  )
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
