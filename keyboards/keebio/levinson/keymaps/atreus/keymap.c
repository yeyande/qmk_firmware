#include QMK_KEYBOARD_H

#define _QW 0
#define _RS 1
#define _LW 2

/*
 *  q       w      e     r    t        ||       y     u     i     o    p
 *  a       s      d     f    g        ||       h     j     k     l    ;
 *  z       x      c     v    b        ||       n     m     ,     .    /
 * esc     tab    gui  shift bksp ctrl || alt space raise   -     '  enter
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = LAYOUT_ortho_4x12( /* Qwerty */
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,   KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,   KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,   KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
     KC_ESC, KC_TAB, KC_LGUI,  KC_LSFT, KC_BSPC,  KC_LCTL, KC_LALT, KC_SPC,  MO(_RS), KC_MINS, KC_QUOT, KC_ENT  ),
/*
 *  !       @     up     {    }        ||     pgup    7     8     9    *
 *  #     left   down  right  $        ||     pgdn    4     5     6    +
 *  [       ]      (     )    &        ||       `     1     2     3    \
 * lower  insert super shift bksp ctrl || alt space   fn    .     0    =
 */
[_RS] = LAYOUT_ortho_4x12( /* [> RAISE <] */
     KC_EXLM, KC_AT,   KC_UP,   KC_LCBR, KC_RCBR, KC_NO,   KC_NO,   KC_PGUP, KC_7,    KC_8,   KC_9, KC_ASTR ,
     KC_HASH, KC_LEFT, KC_DOWN, KC_RGHT, KC_DLR,  KC_NO,   KC_NO,   KC_PGDN, KC_4,    KC_5,   KC_6, KC_PLUS ,
     KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_AMPR, KC_NO,   KC_NO,   KC_GRV,  KC_1,    KC_2,   KC_3, KC_BSLS ,
     TG(_LW), KC_INS,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_TRNS, KC_DOT, KC_0, KC_EQL  ),
/*
 * insert home   up  end   pgup       ||      up     F7    F8    F9   F10
 *  del   left  down right pgdn       ||     down    F4    F5    F6   F11
 *       volup             reset      ||             F1    F2    F3   F12
 *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
 */
[_LW] = LAYOUT_ortho_4x12( /* [> LOWER <] */
     KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_NO,   KC_NO,   KC_UP,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
     KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_DOWN, KC_NO,   KC_NO,   KC_DOWN, KC_F4,   KC_F5,   KC_F6,   KC_F11  ,
     KC_NO,   KC_VOLU, KC_NO,   KC_NO,   RESET,   KC_NO,   KC_NO,   KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12  ,
     KC_NO,   KC_VOLD, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  TO(_QW), KC_PSCR, KC_SLCK, KC_PAUS )
};
