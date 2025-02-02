
// Below layout is based upon /u/That-Canadian's planck layout

#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 2
#define _RAISE 3

#define _FUNCTION 15
#define _ADJUST 16

enum eco_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE
};

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-------------------------------------------------------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   (  |   )  |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Func |   A  |   S  |   D  |   F  |   G  |   [  |   ]  |   H  |   J  |   K  |   L  |   ;  | Enter|
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |   {  |   }  |   N  |   M  |   ,  |   .  |   /  |  '   |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Ctrl |  `   | GUI  | Alt  |Lower | Space|Pg-dwn| Pg-up| Space|Raise | Left | Down |  Up  |Right |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_QWERTY] = LAYOUT(
    KC_TAB,          KC_Q,   KC_W,    KC_E,    KC_R,  KC_T,   KC_LPRN, KC_RPRN, KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
    MO(_FUNCTION), KC_A,   KC_S,    KC_D,    KC_F,  KC_G,   KC_LBRC, KC_RBRC, KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENT,
    OSM(MOD_LSFT), KC_Z,   KC_X,    KC_C,    KC_V,  KC_B,   KC_LCBR, KC_RCBR, KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
    KC_LCTL,         KC_GRV, KC_LGUI, KC_LALT, LOWER, KC_SPC, KC_PGDN, KC_PGUP, KC_SPC, RAISE, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  /* Lower
   * ,-------------------------------------------------------------------------------------------------.
   * | Esc  |   !  |   @  |   #  |   $  |   %  |      |      |   ^  |   &  |   *  |   (  |   )  | Del  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |  F6  |   _  |   +  |   {  |   }  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |  F7  |  F8  |  F9  |  F10 |  F11 |      |      |  F12 |      |      | Mute |      |  |   |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |Lower |      |      |      | Bksp |Raise | Next | Vol- | Vol+ | Play |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_LOWER] = LAYOUT(
    KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, _______,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, KC_F12,  _______, _______, KC_MUTE, _______, KC_PIPE,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_BSPC, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
  ),

  /* Raise
   * ,-------------------------------------------------------------------------------------------------.
   * | Esc  |   1  |   2  |   3  |   4  |   5  |      |      |   6  |   7  |   8  |   9  |   0  | Del  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |   4  |   5  |   6  |   +  |      |      |      |      |   -  |   =  |   [  |   ]  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |Enter |   7  |   8  |   9  |   -  |      |      |      |      |      |      | Mute |      |   \  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |   ,  |   0  |  .   |Lower | Bksp |      |      |      |Raise | Next | Vol- | Vol+ | Play |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_RAISE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2, KC_3,   KC_4,    KC_5,    _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    _______, KC_4,    KC_5, KC_6,   KC_PLUS, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______,
    KC_ENT,  KC_7,    KC_8, KC_9,   KC_MINS, _______, _______, _______, _______, _______, _______, KC_MUTE, _______, KC_BSLS,
    _______, KC_COMM, KC_0, KC_DOT, _______, KC_BSPC, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
  ),

  /* Adjust (Lower + Raise)
   * ,-------------------------------------------------------------------------------------------------.
   * |Taskmg| Reset|      |      |      |      |      |      |      |      |      |      |      |caltde|
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_ADJUST] = LAYOUT(
    TSKMGR,  RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, CALTDEL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /* Function
   * ,-------------------------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      |      |      |      |  Up  |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      | Left | Down |Right |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Caps |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_FUNCTION] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )

};

#ifdef AUDIO_ENABLE

float tone_startup[][2]    = SONG(STARTUP_SOUND);
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
float music_scale[][2]     = SONG(MUSIC_SCALE_SOUND);

float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
#endif


void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistant_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
  }
  return true;
}

void matrix_init_user(void) {
    #ifdef AUDIO_ENABLE
        startup_user();
    #endif
}

#ifdef AUDIO_ENABLE

void startup_user()
{
    _delay_ms(20); // gets rid of tick
    PLAY_SONG(tone_startup);
}

void shutdown_user()
{
    PLAY_SONG(tone_goodbye);
    _delay_ms(150);
    stop_all_notes();
}

void music_on_user(void)
{
    music_scale_user();
}

void music_scale_user(void)
{
    PLAY_SONG(music_scale);
}

#endif
