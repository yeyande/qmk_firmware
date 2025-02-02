#include QMK_KEYBOARD_H

// Helpful defines

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [0] = LAYOUT
     (KC_GESC,   KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,            KC_BSPC, 
     LT(1,KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(1,KC_QUOT), 
     KC_LSPO,       KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, 
     KC_LCTL,  KC_LALT,  KC_LGUI,    KC_ENT,    KC_SPC,    TG(2),    LT(3,KC_APP),      KC_DEL),
     
     [1] = LAYOUT
     (KC_CAPS,  KC_PGUP, KC_UP, KC_PGDN, KC_INS, KC_HOME, KC_UNDS, KC_P7, KC_P8, KC_P9, KC_EQL,       KC_TRNS, 
     KC_TRNS,    KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_END, KC_PMNS, KC_P4, KC_P5, KC_P6, KC_PPLS,    KC_TRNS, 
     KC_MUTE,     KC_VOLD, KC_VOLU, KC_MPLY, KC_MPRV, KC_MNXT, KC_PAST, KC_P1, KC_P2, KC_P3, KC_PSLS, KC_NLCK, 
     KC_TRNS,   KC_TRNS,   KC_MSTP,    KC_PENT,     KC_P0,          KC_PDOT,     KC_APP,              KC_TRNS),
     
     [2] = LAYOUT
     (KC_TRNS,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,                   KC_TRNS, 
     KC_TRNS,    KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,                    KC_TRNS, 
     KC_TILD,     KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, 
     KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,         KC_TRNS,     KC_TRNS,        KC_F11,            KC_F12),
     
     [3] = LAYOUT
     (KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR,   KC_TRNS, 
     KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC,  KC_PIPE, 
     KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_RPRN, KC_TRNS, 
     BL_TOGG,  BL_DEC,    BL_INC,    KC_TRNS,            KC_TRNS,        KC_TRNS,             KC_TRNS,       RESET)
};
