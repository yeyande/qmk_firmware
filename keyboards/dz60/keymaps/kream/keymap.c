#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_ansi_split_space_rshift(
        KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,  KC_5,   KC_6,    KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,   KC_Y,    KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1),   KC_A,    KC_S,    KC_D,   KC_F,  KC_G,   KC_H,    KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,   KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(1),
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_NO, KC_SPC, KC_CAPS, KC_NO, KC_NO,   KC_ENT),

     [1] = LAYOUT_60_ansi_split_space_rshift(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSCR, KC_GRV,  KC_TILD, _______,
        _______, KC_VOLD, KC_MUTE, KC_VOLU, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        _______, KC_SLCK, KC_PAUS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};
