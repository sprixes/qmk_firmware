/* Copyright 2026 sprixes
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

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define NO_DEBUG
#define NO_PRINT
#define NO_USB_STARTUP_CHECK

#define MOUSEKEY_INERTIA
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_TIME_TO_MAX 64
#define MOUSEKEY_MAX_SPEED 40
#define MOUSEKEY_FRICTION  1
#define MOUSEKEY_MOVE_DELTA 1

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(S__NOTE(_E2))
  #define GOODBYE_SONG SONG(S__NOTE(_C2))
#endif

// for sanwa keyboard emulation KVM
// #undef NKRO_ENABLE

#define USB_POLLING_INTERVAL_MS 5
#define DEBOUNCE 8
