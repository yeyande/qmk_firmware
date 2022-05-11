#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _DN,
    _UP,
     _NAV,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    /* Base layer (0)
     * ,------------------------------------------------------------------------.
     * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | Bksp |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------|
     * |  Tab |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ů  | Nav |
     * `------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----'
     *   | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,      |  .  |Enter |
     *   `-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+------'
     *        | Ctrl | GUI |LAlt |   Space    |  SpaceUp  |AltGr| Down |
     *        `--------------------------------------------------------'
     */
      
    [_BASE] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, 
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, TT(_NAV), 
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_ENT,  
                 KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,            LT(_UP,KC_SPC),   KC_RALT, MO(_DN)
    ),
     
     /* Down layer (1)
      * function keys and numbers
     * ,------------------------------------------------------------------------.
     * | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12  |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------|
     * |      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |     |
     * `------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----'
     *   |       |NumLk|     |     |  +  |  -  |  *  |  /  |  ,      |  .  |      |
     *   `-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+------'
     *        |  Fn  |     |     |   C+A+D    |   C+A+I   |     |      |
     *        `--------------------------------------------------------'
     */
      
    [_DN] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, _______,
        _______, KC_NLCK, _______, _______, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_COMM, KC_DOT,  _______, 
                 MO(_FN), _______, _______, LCA(KC_DEL),      LCA(KC_INS),      _______, _______
    ),
     
     /* Up layer (2)
      * national and special characters
     * ,------------------------------------------------------------------------.
     * | +1  | ě2  | š3  | č4  | ř5  | ž6  | ý7  | á8  | í9  | é0  |  ´  |  ˇ   |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------|
     * |  ;°  |     |     |     |  |  |  (  |  )  |  §  |  !  |  /  |  ú  |     |
     * `------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----'
     *   |       |     |     |  \  |  %  |  =  |  ¨  |  '  |  -      |  _  |      |
     *   `-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+------'
     *        |      |     |     |            |           |     |      |
     *        `--------------------------------------------------------'
     */
      
    [_UP] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,          KC_7,    KC_8,          KC_9,          KC_0,          KC_EQL,  LSFT(KC_EQL),
        KC_GRV,  _______, _______, _______, LSFT(KC_NUBS), LSFT(KC_RBRC), KC_RBRC, KC_QUOT,       LSFT(KC_QUOT), LSFT(KC_LBRC), KC_LBRC, _______,
        _______, _______, _______, KC_NUBS, LSFT(KC_MINS), KC_MINS,       KC_BSLS, LSFT(KC_BSLS), KC_SLSH,       LSFT(KC_SLSH), _______,
                 _______, _______, _______, _______,                      _______,                _______,       _______
    ),
     
     /* Navigation layer (3)
      * arrows, nav cluster
     * ,------------------------------------------------------------------------.
     * |     |     |     |     |     |Home |PgUp |     |     | Up  | Ins | Del  |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------|
     * |      |     |     |     |     | End |PgDn |     |Left |Down |Right|     |
     * `------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----'
     *   |       |Caps |PrtSc|ScrLk|Pause|     |     |     |         |     |      |
     *   `-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+------'
     *        |      |     |     |            |           |     | Menu |
     *        `--------------------------------------------------------'
     */
      
    [_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, _______, _______, KC_UP,   KC_INS,  KC_DEL, 
        _______, _______, _______, _______, _______, KC_END,  KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, 
        _______, KC_CAPS, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, _______, _______, _______, 
                 _______, _______, _______, _______,          _______,          _______, KC_APP
    ),
     
     /* Function layer (4)
      * keyboard and system control
     * ,------------------------------------------------------------------------.
     * |Reset|     |     |     |     |     |     |Play |Prev |Next |Stop |      |
     * |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------|
     * |Sleep | VLK |Mod+ |Hue+ |Sat+ |Val+ |     |     |Vol- |Vol+ |Mute |     |
     * `------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----'
     *   |       | TOG |Mod- |Hue- |Sat- |Val- |     |     |         |     |      |
     *   `-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+------'
     *        |      |     |     |            |           |     |      |
     *        `--------------------------------------------------------'
     */
      
    [_FN] = LAYOUT(
        RESET,   _______, _______,  _______, _______, _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, KC_MSTP, _______, 
        KC_SLEP, VLK_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, 
        _______, RGB_TOG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, 
                 _______, _______,  _______, _______,          _______,          _______, _______
    )
    
};

bool process_record_user (uint16_t keycode, keyrecord_t *record) {
    return true;
}
