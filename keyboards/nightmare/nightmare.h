/* Copyright 2019 cfbender
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_default( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k113, k013, \
    k100,  k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112,   k213,    \
    k200, k201,   k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212,  k313,    \
    k300,      k301, k302,                         k307,               k311, k312             \
) { \
    { k000,  k001,  k002,  k003,  k004,  k005,  k006,  k007,  k008, k009, k010, k011, k012, k013   }, \
     { k100,  k101,  k102,  k103,  k104,  k105,  k106,  k107,  k108, k109, k110, k111, k112, k113   }, \
     { k200,  k201,  k202,  k203,  k204,  k205,  k206,  k207,  k208, k209, k210, k211, k212, k213   }, \
     { k300,  k301,  k302,  KC_NO, KC_NO, KC_NO, KC_NO, k307, KC_NO, KC_NO, KC_NO, k311, k312, k313 } \
}


#define LAYOUT_split( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k113, k013, \
    k100,  k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112,   k213,    \
    k200, k201,   k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212,  k313,    \
    k300,      k301, k302, k304,      k305,         k307,  k309,  k311, k312             \
) { \
    { k000,  k001,  k002,  k003,  k004,  k005,  k006,  k007,  k008, k009, k010, k011, k012, k013   }, \
     { k100,  k101,  k102,  k103,  k104,  k105,  k106,  k107,  k108, k109, k110, k111, k112, k113   }, \
     { k200,  k201,  k202,  k203,  k204,  k205,  k206,  k207,  k208, k209, k210, k211, k212, k213   }, \
     { k300,  k301,  k302,  KC_NO, k304,  k305, KC_NO,  k307, KC_NO, k309, KC_NO, k311, k312, k313 } \
}
