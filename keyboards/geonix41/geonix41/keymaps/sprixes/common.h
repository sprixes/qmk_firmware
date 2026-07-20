/* Copyright 2026 sprixes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */
#pragma once
#include QMK_KEYBOARD_H

enum geonix_layers {
    _BASE,
    _SYMBOL,
    _FKEYS,
    _NAV,
};

#define FKEYS MO(_FKEYS)

#define WORD_L LALT(KC_LEFT)
#define WORD_R LALT(KC_RIGHT)

#define LINE_L LGUI(KC_LBRC)
#define LINE_R LGUI(KC_RBRC)

#define DEL_WRD LALT(KC_BSPC)

#define TAB_L LCTL(LSFT(KC_TAB))
#define TAB_R LCTL(KC_TAB)

#define CUT   LGUI(KC_X)
#define COPY  LGUI(KC_C)
#define PASTE LGUI(KC_V)

#define EMOJI LCTL(LGUI(KC_SPC))

#define MAC_LOK LCTL(LGUI(KC_Q))

#define CAP_LST LGUI(LSFT(KC_7))
#define CAP_IMG LGUI(LSFT(KC_6))
#define CAP_MOV LGUI(LSFT(KC_5))

#define XBX_IMG LGUI(LALT(KC_PSCR))
#define XBX_MOV LGUI(LALT(KC_G))
