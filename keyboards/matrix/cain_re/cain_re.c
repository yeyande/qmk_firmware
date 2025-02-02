/**
 * cain_re.c
 *
    Copyright 2020 astro <yuleiz@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "cain_re.h"

void matrix_init_kb(void)
{
     setPinOutput(NUM_PIN);
     setPinOutput(CAPS_PIN);
     setPinOutput(SCROLL_PIN);

     matrix_init_user();
}

bool led_update_kb(led_t led_state)
{
    bool res = led_update_user(led_state);
    if (res) {
        writePin(NUM_PIN, led_state.num_lock);
        writePin(CAPS_PIN, led_state.caps_lock);
        writePin(SCROLL_PIN, led_state.scroll_lock);
    }
    return res;
}
