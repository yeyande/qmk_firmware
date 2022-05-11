/* Copyright 2018 Jason Williams (Wilba)
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

#define ____ KC_NO

// Right switch of split backspace is at 2,13 and is the only switch
// whose physical position doesn't match switch matrix position :-(
// However, it also makes no sense to view the physical as 16 columns,
// so the numbering goes 00 to 14. Deal with it.

#define LAYOUT_all( \
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K213, K014, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       K114, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,             K214, \
    K300, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,             K313, K314, \
    K400, K401, K402,                   K406,                   K410, K411,       K412, K413, K414  \
) { \
    { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014 }, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114 }, \
    { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214 }, \
     { K300, ____, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314 }, \
    { K400, K401, K402, ____, ____, ____, K406, ____, ____, ____, K410, K411, K412, K413, K414 }  \
}

