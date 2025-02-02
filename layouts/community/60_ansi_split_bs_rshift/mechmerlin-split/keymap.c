#include QMK_KEYBOARD_H
#include "mechmerlin.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT_60_ansi_split_bs_rshift(
    KC_GESC, KC_1,    KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC, KC_BSPC, \
     KC_TAB,  KC_Q,    KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLASH,        \
    KC_CTCP, KC_A,    KC_S, KC_D, KC_F, KC_G, KC_H, KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,                    \
    KC_LSFT, KC_Z,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  TG(_AL),                   \
    KC_LCTL, KC_LGUI, KC_LALT,       KC_SPACE,             MO(_FL), KC_RALT, KC_RGUI, KC_RCTL),

[_FL] = LAYOUT_60_ansi_split_bs_rshift(
    KC_GRV,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_DEL, \
       BL_TOGG, BL_INC,   BL_DEC,  BL_STEP, RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        \
    RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 \
    VLK_TOG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,                 \
    KC_TRNS, KC_TRNS,  KC_TRNS,       MO(_CL),                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_AL] = LAYOUT_60_ansi_split_bs_rshift(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS,                   \
    KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,                               KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT),

[_CL] = LAYOUT_60_ansi_split_bs_rshift(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
     KC_TRNS, KC_TRNS, KC_TRNS, EEP_RST, RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,                 \
    KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

 };
