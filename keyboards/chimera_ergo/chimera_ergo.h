#ifndef CHIMERA_ERGO_H
#define CHIMERA_ERGO_H

#include "quantum.h"

#define red_led_off   PORTF |= (1<<5)
#define red_led_on    PORTF &= ~(1<<5)
#define blu_led_off   PORTF |= (1<<4)
#define blu_led_on    PORTF &= ~(1<<4)
#define grn_led_off   PORTD |= (1<<1)
#define grn_led_on    PORTD &= ~(1<<1)

#define set_led_off     red_led_off; grn_led_off; blu_led_off
#define set_led_red     red_led_on;  grn_led_off; blu_led_off
#define set_led_blue    red_led_off; grn_led_off; blu_led_on
#define set_led_green   red_led_off; grn_led_on;  blu_led_off
#define set_led_yellow  red_led_on;  grn_led_on;  blu_led_off
#define set_led_magenta red_led_on;  grn_led_off; blu_led_on
#define set_led_cyan    red_led_off; grn_led_on;  blu_led_on
#define set_led_white   red_led_on;  grn_led_on;  blu_led_on

/*
#define LED_B 5
#define LED_R 6
#define LED_G 7

#define all_leds_off PORTF &= ~(1<<LED_B) & ~(1<<LED_R) & ~(1<<LED_G)

#define red_led_on   PORTF |= (1<<LED_R)
#define red_led_off  PORTF &= ~(1<<LED_R)
#define grn_led_on   PORTF |= (1<<LED_G)
#define grn_led_off  PORTF &= ~(1<<LED_G)
#define blu_led_on   PORTF |= (1<<LED_B)
#define blu_led_off  PORTF &= ~(1<<LED_B)

#define set_led_off     PORTF &= ~(1<<LED_B) & ~(1<<LED_R) & ~(1<<LED_G)
#define set_led_red     PORTF = PORTF & ~(1<<LED_B) & ~(1<<LED_G) | (1<<LED_R)
#define set_led_blue    PORTF = PORTF & ~(1<<LED_G) & ~(1<<LED_R) | (1<<LED_B)
#define set_led_green   PORTF = PORTF & ~(1<<LED_B) & ~(1<<LED_R) | (1<<LED_G)
#define set_led_yellow  PORTF = PORTF & ~(1<<LED_B) | (1<<LED_R) | (1<<LED_G)
#define set_led_magenta PORTF = PORTF & ~(1<<LED_G) | (1<<LED_R) | (1<<LED_B)
#define set_led_cyan    PORTF = PORTF & ~(1<<LED_R) | (1<<LED_B) | (1<<LED_G)
#define set_led_white   PORTF |= (1<<LED_B) | (1<<LED_R) | (1<<LED_G)
*/

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT_kc( \
  k00, k01, k02, k03, k04, k05,      k06, k07, k08, k09, k10, k11, \
  k12, k13, k14, k15, k16, k17,      k18, k19, k20, k21, k22, k23, \
  k24, k25, k26, k27, k28, k29,      k30, k31, k32, k33, k34, k35, \
  k36, k37, k38, k39, k40, k41,      k42, k43, k44, k45, k46, k47, \
                      k48, k49,      k50, k51 \
) \
{ \
     { KC_NO,    KC_NO,    KC_##k26, KC_##k15, KC_##k28, KC_##k01,      KC_##k42, KC_##k31, KC_##k20, KC_##k33, KC_NO,    KC_NO     }, \
     { KC_##k00, KC_NO,    KC_##k14, KC_##k27, KC_##k16, KC_##k36,      KC_##k47, KC_##k19, KC_##k32, KC_##k21, KC_NO,    KC_##k11  }, \
     { KC_##k12, KC_##k25, KC_##k02, KC_##k39, KC_##k17, KC_##k49,      KC_##k50, KC_##k18, KC_##k44, KC_##k09, KC_##k34, KC_##k23  }, \
     { KC_##k24, KC_##k13, KC_##k38, KC_##k04, KC_##k05, KC_##k48,      KC_##k51, KC_##k06, KC_##k07, KC_##k45, KC_##k22, KC_##k35  },  \
     { KC_##k29, KC_##k41, KC_##k03, KC_##k40, KC_##k37, KC_NO,         KC_##k30, KC_##k43, KC_##k08, KC_##k10, KC_##k46, KC_NO     }, \
}

#define LAYOUT( \
  k00, k01, k02, k03, k04, k05,      k06, k07, k08, k09, k10, k11, \
  k12, k13, k14, k15, k16, k17,      k18, k19, k20, k21, k22, k23, \
  k24, k25, k26, k27, k28, k29,      k30, k31, k32, k33, k34, k35, \
  k36, k37, k38, k39, k40, k41,      k42, k43, k44, k45, k46, k47, \
                      k48, k49,      k50, k51 \
) \
{ \
     { KC_NO, KC_NO, k26, k15, k28, k01,      k42, k31, k20, k33, KC_NO, KC_NO  }, \
     { k00,   KC_NO, k14, k27, k16, k36,      k47, k19, k32, k21, KC_NO, k11    }, \
     { k12,   k25,   k02, k39, k17, k49,      k50, k18, k44, k09, k34,   k23    }, \
     { k24,   k13,   k38, k04, k05, k48,      k51, k06, k07, k45, k22,   k35    },  \
     { k29,   k41,   k03, k40, k37, KC_NO,    k30, k43, k08, k10, k46,   KC_NO  }, \
}

#endif
