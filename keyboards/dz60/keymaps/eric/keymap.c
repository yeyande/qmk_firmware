#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0
* ,-----------------------------------------------------------------------------------------.
* | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \  |  ~  |
* |-----------------------------------------------------------------------------------------+
* | Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  | Bkspc   |
* |-----------------------------------------------------------------------------------------+
* | Ctrl    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |   /   |  Shift   | Fn |
* |-----------------------------------------------------------------------------------------+
* | Caps  |  GUI |  Alt |                    Space               |   Alt   |  GUI  |  Ctrl  |
* `-----------------------------------------------------------------------------------------'
*/

     LAYOUT(
          KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
          KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
          KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(1),
          KC_CAPS, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, KC_RALT, KC_RALT, KC_RCTL),



 /* Layer 1
* ,-----------------------------------------------------------------------------------------.
* |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 | INS | Del |
* |-----------------------------------------------------------------------------------------+
* |      | PGUP | UP | PGDN | HOME | &  |  ~  |     |     |     | Prnt | UP | Del |  Bkspc  |
* |-----------------------------------------------------------------------------------------+
* |        | LEFT | DWN | RGHT | END |  *  |    |    | PGUP | HOME | LEFT | RGHT |          |
* |-----------------------------------------------------------------------------------------+
* |           |  _  |  +  |  (  |  )  |  |  |     |     | PGDN | END |  DWN  |        |     |
* |-----------------------------------------------------------------------------------------+
* |       |      |       |                                         |        |      |        |
* `-----------------------------------------------------------------------------------------'
*/


     LAYOUT(
          KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,
          KC_TRNS, KC_PGUP, KC_UP, KC_PGDN, KC_HOME, KC_AMPR, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_UP, KC_DEL, KC_BSPC,
          KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_ASTR, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_LEFT, KC_RGHT, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_LPRN, KC_RPRN, KC_PIPE, KC_TRNS, KC_TRNS, KC_PGDN, KC_END, KC_DOWN, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(2), KC_TRNS, KC_TRNS, KC_TRNS),

     LAYOUT(
          RESET, KC_A, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};
