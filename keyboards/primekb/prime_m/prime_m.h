/* Copyright 2018 Jumail Mundekkat
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
#define ___ KC_NO

#define LAYOUT_ortho_5x6( \
     K00, K01, K02, K03, K04, K05, \
     K10, K11, K12, K13, K14, K15, \
     K20, K21, K22, K23, K24, K25, \
     K30, K31, K32, K33, K34, K35, \
     K40, K41, K42, K43, K44, K45  \
) { \
     { K00,   K01,   K02,   K03,   K04,   K05 }, \
     { K10,   K11,   K12,   K13,   K14,   K15 }, \
     { K20,   K21,   K22,   K23,   K24,   K25 }, \
     { K30,   K31,   K32,   K33,   K34,   K35 }, \
     { K40,   K41,   K42,   K43,   K44,   K45 }  \
}

#define LAYOUT_numpad_5x6( \
     K00, K01, K02, K03, K04, K05, \
     K10, K11, K12, K13, K14,      \
     K20, K21, K22, K23, K24, K15, \
     K30, K31, K32, K33, K34,      \
     K40, K41,   K42,    K44, K35 \
) { \
     { K00,   K01,   K02,   K03,   K04,   K05 }, \
     { K10,   K11,   K12,   K13,   K14,   K15 }, \
     { K20,   K21,   K22,   K23,   K24,   ___ }, \
     { K30,   K31,   K32,   K33,   K34,   K35 }, \
     { K40,   K41,   K42,   ___,   K44,   ___ }  \
}
