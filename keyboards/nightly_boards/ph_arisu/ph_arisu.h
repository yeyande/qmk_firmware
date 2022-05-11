#pragma once

#include "quantum.h"

#define LAYOUT( \
     K000, K010, K001, K011, K002, K012, K003,       K013, K004, K014, K005, K015, K006, K016, K007, K027, \
     K020, K030, K021, K031, K022, K032,       K023, K033, K024, K034, K025, K035, K026, K036,       K047, \
     K040, K050, K041, K051, K042, K052,       K043, K053, K044, K054, K045, K055,       K046,       K067, \
     K060, K070, K061, K071, K062, K072,       K063, K073, K064, K074, K065, K075,             K076,       \
     K080,       K081,       K082, K092,       K093,       K094,                         K086, K096, K087  \
) { \
     { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007 }, \
     { K010,  K011,  K012,  K013,  K014,  K015,  K016,  KC_NO }, \
     { K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027 }, \
     { K030,  K031,  K032,  K033,  K034,  K035,  K036,  KC_NO }, \
     { K040,  K041,  K042,  K043,  K044,  K045,  K046,  K047 }, \
     { K050,  K051,  K052,  K053,  K054,  K055,  KC_NO, KC_NO }, \
     { K060,  K061,  K062,  K063,  K064,  K065,  KC_NO, K067 }, \
     { K070,  K071,  K072,  K073,  K074,  K075,  K076,  KC_NO }, \
     { K080,  K081,  K082,  KC_NO, KC_NO, KC_NO, K086,  K087 }, \
     { KC_NO, KC_NO, K092,  K093,  K094,  KC_NO, K096,  KC_NO }  \
}
