#include QMK_KEYBOARD_H

#define WIN_TAB LGUI(KC_TAB)
#define WIN_LOCK LGUI(KC_L)

enum layers {
  NORMAL_LAYER = 0,
  MEDIA_LAYER,
  TBD_LAYER2,
  FRENCH_LAYER
};


/* Enum for the tap dancing keys */
enum tap_codes {
    A_Q, E_Q, E_U, E_E,
    A_Y, I_I, O_C, U_U
};

#define FR_A_GRAVE  "00E0"
#define FR_A_HAT    "00E2"

#define FR_C_CIRCUM "00E7"

#define FR_E_AIGU   "00E9"
#define FR_E_GRAVE  "00E8"
#define FR_E_HAT    "00EA"
#define FR_E_UMLAUT "00EB"

#define FR_I_HAT    "00EE"
#define FR_I_UMLAUT "00EF"

#define FR_O_HAT    "00F4"

#define FR_U_GRAVE  "00F9"
#define FR_U_HAT    "00FB"
#define FR_U_UMLAUT "00FC"

#define FR_Y_UMLAUT "00FF"

#define FR_L_QUOTE  "00AB"
#define FR_R_QUOTE  "00BB"

void send_french_unicode_char(uint8_t count, char *once, char *twice)
{
    if (count <= 1)
     send_unicode_hex_string(once);
    else
     send_unicode_hex_string(twice); 
}

void dance_a_q(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_A_GRAVE, FR_L_QUOTE);
}

void dance_e_q(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_E_AIGU, FR_R_QUOTE);
}

void dance_e_u(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_E_GRAVE, FR_U_GRAVE);
}

void dance_e_e(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_E_HAT, FR_E_UMLAUT);
}

void dance_a_y(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_A_HAT, FR_Y_UMLAUT);
}

void dance_i_i(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_I_HAT, FR_I_UMLAUT);
}

void dance_o_c(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_O_HAT, FR_C_CIRCUM);
}

void dance_u_u(qk_tap_dance_state_t *state, void *user_data)
{
    send_french_unicode_char(state->count, FR_U_HAT, FR_U_UMLAUT);
}

/* Define the tap dance actions for the french characters */
qk_tap_dance_action_t tap_dance_actions[] = {
    [A_Q] = ACTION_TAP_DANCE_FN(dance_a_q),
    [E_Q] = ACTION_TAP_DANCE_FN(dance_e_q),
    [E_U] = ACTION_TAP_DANCE_FN(dance_e_u),
    [E_E] = ACTION_TAP_DANCE_FN(dance_e_e),

    [A_Y] = ACTION_TAP_DANCE_FN(dance_a_y),
    [I_I] = ACTION_TAP_DANCE_FN(dance_i_i),
    [O_C] = ACTION_TAP_DANCE_FN(dance_o_c),
    [U_U] = ACTION_TAP_DANCE_FN(dance_u_u)
};
    


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [NORMAL_LAYER] = LAYOUT(TO(1),    WIN_TAB, KC_HOME, KC_UP,   KC_END, 
                   WIN_LOCK, KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT),

    [MEDIA_LAYER]  = LAYOUT(TO(2),    KC_CALC, KC_MPRV, KC_MNXT, KC_VOLU, 
                   KC_TRNS,  KC_TRNS, KC_MSTP, KC_MPLY, KC_VOLD),

    [TBD_LAYER2]   = LAYOUT(TO(3),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [FRENCH_LAYER] = LAYOUT(TO(0),    TD(A_Q), TD(E_Q), TD(E_U), TD(E_E), 
                   KC_TRNS,  TD(A_Y), TD(I_I), TD(O_C), TD(U_U))
};


/* DISABLED
void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
     return true;
}
*/


void matrix_init_user(void)
{
    set_unicode_input_mode(UC_WINC);  /* See https://jayliu50.github.io/qmk-cheatsheet/ */
}


layer_state_t layer_state_set_user(layer_state_t state)
{
    turn_off_leds();

    switch (get_highest_layer(state))
    {
    case NORMAL_LAYER:
     break;

    case MEDIA_LAYER:
     turn_on_led(RED_LED);
     break;

    case TBD_LAYER2:
     turn_on_led(BLUE_LED);
     break;

    case FRENCH_LAYER:
     turn_on_led(GREEN_LED);
     break;
     }
    return state;
}
