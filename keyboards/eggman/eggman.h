/* Copyright 2021 Alan Lehners
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

#define XXX KC_NO

#define LAYOUT_default( \
                            K02,      K04, \
     K10, K00, K11, K01, K12, K13, K14, K05, K15, K06, K16, \
     K30, K20, K31, K21, K32, K33, K34, K25, K35, K26, K36, \
     K50, K40, K51, K41, K52, K53, K54, K45, K55, K46, K56, \
              K61, K62,      K64, K65 \
) \
{ \
{ K00, K01, K02, XXX, K04, K05, K06 }, \
{ K10, K11, K12, K13, K14, K15, K16 }, \
{ K20, K21, XXX, XXX, XXX, K25, K26 }, \
{ K30, K31, K32, K33, K34, K35, K36 }, \
{ K40, K41, XXX, XXX, XXX, K45, K46 }, \
{ K50, K51, K52, K53, K54, K55, K56 }, \
{ XXX, K61, K62, XXX, K64, K65, XXX }, \
}

