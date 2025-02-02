/* Copyright 2020 customMK
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

#include "genesis.h"

__attribute__((weak)) void encoder_update_user(uint8_t index, bool clockwise) {
     /* top left encoder */
     if (index == 0) {
          if (clockwise) {
               tap_code(KC_VOLU);
          } else {
               tap_code(KC_VOLD);
          }
     }
     /* top right encoder */
     else if (index == 1) {
          if (clockwise) {
               tap_code(KC_VOLU);
          } else {
               tap_code(KC_VOLD);
          }
     }    
}