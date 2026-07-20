/* Copyright 2026 sprixes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */
#include QMK_KEYBOARD_H
#include "common.h"
#include "../../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_tkl_ansi(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT(_NAV, KC_SCLN), KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        FKEYS,   KC_LCTL, DEL_WRD, KC_LGUI, FKEYS,   MO(_SYMBOL), KC_SPC, MEH_T(KC_ENT), KC_LALT, _______, _______, FKEYS
    ),

    [_SYMBOL] = LAYOUT_tkl_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_TILD, KC_LPRN, KC_RPRN, KC_HASH, KC_EQL,  KC_PERC, KC_CIRC, KC_MINS, KC_ASTR, KC_LCBR, KC_RCBR, KC_LBRC,
        KC_PIPE, KC_EXLM, KC_AT,   KC_PLUS, KC_DLR,  KC_COLN, KC_UNDS, KC_AMPR, KC_LT,   KC_GT,   KC_BSLS, KC_RBRC,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FKEYS] = LAYOUT_tkl_ansi(
        MD_USB,  MD_BLE1, MD_BLE2, MD_BLE3, MD_24G,  _______, _______, _______, MS_UP,   _______, QK_BAT,  KC_DEL,
        KC_LCTL, KC_F5,   KC_F6,   KC_F7,   KC_F8,   RGB_MOD, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLU, MAC_LOK,
        QK_BOOT, KC_F9,   KC_F10,  KC_F11,  KC_F12,  RGB_VAI, RGB_VAD, KC_F13,  KC_F14,  KC_F15,  KC_F16,  _______,
        _______, _______, U_EE_CLR,_______, _______, TIME_ST, EMOJI,   MS_BTN1, MS_BTN2, RGB_SPD, RGB_SPI, _______
    ),

    [_NAV] = LAYOUT_tkl_ansi(
        _______, _______, _______, WORD_R,  _______, _______, _______, KC_PGUP, LINE_R,  LINE_L,  _______, _______,
        _______, _______, _______, KC_PGDN, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, CUT,     COPY,    PASTE,   WORD_L,  _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
