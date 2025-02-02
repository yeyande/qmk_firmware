#include QMK_KEYBOARD_H
#define T1 MO(1)
#define T2 MO(2)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( 
    KC_ESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,
     KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_DEL,
     KC_CAPS, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,
     KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, RGB_TOG, RGB_MOD,  KC_MY_COMPUTER, MO(1),
     KC_LCTL, KC_LCTL, KC_LALT,          KC_SPC,       MO(2), KC_PGDOWN, KC_PGUP, KC_CALCULATOR,KC_DEL),     
    [1] = LAYOUT( 
    RGB_TOG,  RGB_MOD, RGB_M_K, RGB_M_X, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_BSPC,
     RGB_SAI,  RGB_SAD,  RGB_HUI, RGB_HUD,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_DEL,
     RGB_VAI, RGB_VAD,  RGB_SPI,  RGB_SPD,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,
     RGB_SPI, RGB_SPD,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, RGB_TOG, RGB_MOD,  KC_MY_COMPUTER, MO(1),
     KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,       MO(2), KC_PGUP, KC_PGDOWN, KC_CALCULATOR,KC_DEL),     
    [2] = LAYOUT( 
    KC_NUMLOCK,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,    KC_F10,    KC_MINS,  KC_EQL,  KC_BSPC,
     KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_DEL,
     KC_CAPS, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,
     KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, RGB_TOG, RGB_MOD,  KC_MY_COMPUTER, MO(1),
     KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,       MO(2), KC_PGUP, KC_PGDOWN, KC_CALCULATOR,KC_DEL),     
    [3] = LAYOUT( 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______, _______,
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______, _______,
     _______, _______, _______,          _______,       _______, _______, _______, _______,_______),     
};
