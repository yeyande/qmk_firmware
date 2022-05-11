#include QMK_KEYBOARD_H

#define KC_MO4 MO(4)
#define KC_MO6 MO(6)
#define KC_MO7 MO(7)

#define KC_LT5 LT(5, KC_SLSH)
#define KC_LT6 LT(6, KC_SCLN)

#define KC_MTRS MT(MOD_RSFT, KC_GRV)

#define KC_DF0 DF(0)
#define KC_DF1 DF(1)
#define KC_DF2 DF(2)
#define KC_DF3 DF(3)

/*
 * Hasu
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │  \  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPSL│  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │ Fn2 │  '  │▒▒▒▒▒│ENTER│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │ Fn1 │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_WIN│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│ Fn3 │ Fn3 │ Fn0 │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
     LAYOUT_kc(
         ESC,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS,  EQL,   NO, BSPC, \
         TAB,    Q,    W,   E,   R,   T,   Y,   U,   I,    O,    P, LBRC, RBRC, BSLS,       \
        CAPS,    A,    S,   D,   F,   G,   H,   J,   K,    L,  LT6, QUOT,   NO,  ENT,       \
        LSFT,   NO,    Z,   X,   C,   V,   B,   N,   M, COMM,  DOT,  LT5,   NO,  MTRS,   NO, \
        LCTL, LGUI, LALT,                SPC,                 RALT,  MO6,  MO6,  MO4),
    /* Keymap 1: colemak
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│GRAVE│  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  W  │  F  │  P  │  G  │  J  │  L  │  U  │  Y  │  ;  │  [  │  ]  │  \  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│BKSPC│  A  │  R  │  S  │  T  │  D  │  H  │  N  │  E  │  I  │  O  │  '  │▒▒▒▒▒│ENTER│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  K  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_WIN│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_WIN│ APP │ Fn0 │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
    */
    LAYOUT_kc(
         GRV,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS, EQL,   NO, BSPC, \
         TAB,    Q,    W,   F,   P,   G,   J,   L,   U,    Y, SCLN, LBRC, RBRC, BSLS,      \
        BSPC,    A,    R,   S,   T,   D,   H,   N,   E,    I,    O, QUOT,   NO,  ENT,      \
        LSFT,   NO,    Z,   X,   C,   V,   B,   K,   M, COMM,  DOT, SLSH,   NO, RSFT,  NO, \
        LCTL, LGUI, LALT,                SPC,                 RALT, RGUI,  APP,  MO4),
    /* Keymap 2: dvorak
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│GRAVE│  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  [  │  ]  │▒▒▒▒▒│BKSPC│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  '  │  ,  │  .  │  P  │  Y  │  F  │  G  │  C  │  R  │  L  │  /  │  =  │  \  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPSL│  A  │  O  │  E  │  U  │  I  │  D  │  H  │  T  │  N  │  S  │  -  │▒▒▒▒▒│ENTER│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│  ;  │  Q  │  J  │  K  │  X  │  B  │  M  │  W  │  V  │  Z  │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_WIN│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_WIN│ APP │ FN0 │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
    */
    LAYOUT_kc(
         GRV,    1,    2,    3,   4,   5,   6,   7,   8,   9,   0, LBRC, RBRC,   NO, BSPC, \
         TAB, QUOT, COMM,  DOT,   P,   Y,   F,   G,   C,   R,   L, SLSH,  EQL, BSLS,       \
        CAPS,    A,    O,    E,   U,   I,   D,   H,   T,   N,   S, MINS,   NO,  ENT,       \
        LSFT,   NO, SCLN,    Q,   J,   K,   X,   B,   M,   W,   V,    Z,   NO, RSFT,   NO, \
        LCTL, LGUI, LALT,                 SPC,               RALT, RGUI,  APP,  MO4),
    /* Keymap 3: workman
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│GRAVE│  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  D  │  E  │  W  │  B  │  J  │  F  │  U  │  P  │  ;  │  [  │  ]  │  \  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│BKSPC│  A  │  S  │  H  │  T  │  G  │  Y  │  N  │  E  │  O  │  I  │  '  │▒▒▒▒▒│ENTER│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│  Z  │  X  │  M  │  C  │  V  │  K  │  L  │  ,  │  .  │  /  │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_WIN│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_WIN│ APP │ FN0 │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
    */
    LAYOUT_kc(
         GRV,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS,  EQL,   NO, BSPC, \
         TAB,    Q,    D,   R,   W,   B,   J,   F,   U,    P, SCLN, LBRC, RBRC, BSLS,       \
        BSPC,    A,    S,   H,   T,   G,   Y,   N,   E,    O,    I, QUOT,   NO,  ENT,       \
        LSFT,   NO,    Z,   X,   M,   C,   V,   K,   L, COMM,  DOT, SLSH,   NO, RSFT,   NO, \
        LCTL, LGUI, LALT,                SPC,                 RALT, RGUI,  APP,  MO4),
    /* Overlay 4: HHKB mode
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│Grave│ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Caps │     │     │     │     │     │     │     │ Psc │ Slk │Pause│ Up  │     │ Ins │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│ VoD │ VoU │Mute │     │     │NP_* │NP_/ │Home │PgUp │Left │Right│▒▒▒▒▒│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│     │     │     │     │     │NP_+ │NP_- │ End │PgDwn│Down │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_GUI│L_ALT│█████│█████│█████│Space│█████│█████│█████│R_ALT│R_GUI│ App │     │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    LAYOUT_kc(
         GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS,  DEL, \
        CAPS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS,   UP, TRNS,  INS,       \
        LCTL, VOLD, VOLU, MUTE, TRNS, TRNS, PAST, PSLS, HOME, PGUP, LEFT, RGHT, TRNS,  ENT,       \
        LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PPLS, PMNS,  END, PGDN, DOWN, TRNS, RSFT, TRNS, \
        LCTL, LGUI, LALT,                    SPC,                   RALT, RGUI,  MO7, TRNS),
    /* Overlay 5: Vi mode (Slash)
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│Grave│ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│BkSpc│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │Home │PgDwn│ Up  │PgUp │ End │Home │PgDwn│PgUp │ End │     │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│     │Left │Down │Right│     │Left │Down │ Up  │Right│     │     │▒▒▒▒▒│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│     │     │     │     │     │Home │PgDwn│PgUp │ End │     │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_GUI│L_ALT│█████│█████│█████│Space│█████│█████│█████│R_ALT│R_GUI│ APP │RCTRL│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    LAYOUT_kc(
         GRV, F1,     F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, BSPC, \
         TAB, HOME, PGDN,   UP, PGUP,  END, HOME, PGDN, PGUP,  END, TRNS, TRNS, TRNS, TRNS,       \
        LCTL, TRNS, LEFT, DOWN, RGHT, TRNS, LEFT, DOWN,   UP, RGHT, TRNS, TRNS, TRNS,  ENT,       \
        LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, HOME, PGDN, PGUP,  END, TRNS, TRNS, RSFT, TRNS, \
        LCTL, LGUI, LALT,                    SPC,                   RALT, RGUI,  APP, RCTL),
    /* Overlay 6: Mouse mode (Semicolon/App)
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│Grave│ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │▒▒▒▒▒│BkSpc│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │     │     │     │     │     │ MwL │ MwD │ MwU │ MwR │     │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│     │ Ac0 │ Ac1 │ Ac2 │     │ McL │ McD │ McU │ McR │     │     │▒▒▒▒▒│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSFHT│▒▒▒▒▒│     │     │     │     │ Mb3 │ Mb2 │ Mb1 │ Mb4 │ Mb5 │     │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_GUI│L_ALT│█████│█████│█████│ Mb1 │█████│█████│█████│     │     │     │RCTRL│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    LAYOUT_kc(
         GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, BSPC, \
         TAB, TRNS, TRNS, TRNS, TRNS, TRNS, WH_L, WH_D, WH_U, WH_R, TRNS, TRNS, TRNS, TRNS,       \
        LCTL, TRNS, ACL0, ACL1, ACL2, TRNS, MS_L, MS_D, MS_U, MS_R, TRNS, TRNS, TRNS,  ENT,       \
        LSFT, TRNS, TRNS, TRNS, TRNS, TRNS, BTN3, BTN2, BTN1, BTN4, BTN5, TRNS, TRNS, RSFT, TRNS, \
        LCTL, LGUI, LALT,                   BTN1,                   TRNS, TRNS, TRNS, RCTL),
    /* Overlay 7: Layout selector
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Lq  │ Lc  │ Ld  │ Lw  │     │     │     │     │     │     │     │     │     │▒▒▒▒▒│     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │ Lq  │ Lw  │     │     │     │     │     │     │     │     │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │ Ld  │     │     │     │     │     │     │     │     │▒▒▒▒▒│     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │▒▒▒▒▒│     │     │ Lc  │     │     │     │     │     │     │     │▒▒▒▒▒│     │▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │█████│█████│█████│     │█████│█████│█████│     │     │     │     │█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘

Lq: set Qwerty layout
Lc: set Colemak layout
Ld: set Dvorak layout
Lw: set Workman layout

    */
    LAYOUT_kc(
         DF0,  DF1,  DF2,  DF3, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
     TRNS,  DF0,  DF3, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
     TRNS, TRNS, TRNS,  DF2, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
     TRNS, TRNS, TRNS, TRNS,  DF1, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
     TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, TRNS, TRNS),
};
