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

#include QMK_KEYBOARD_H
#include "common.h"

/*
 * =========================================================================
 *  USER KEYMAP CONFIGURATION (Planck & Preonic Grid Layouts)
 * =========================================================================
 * 
 *  This layout uses 100% stock QMK keycodes and features.
 * 
 *  Key Features:
 *   - LCTL_T(KC_ESC): Left Control when held, Escape when tapped.
 *   - LT(_NAV, KC_SCLN): Semicolon when tapped, Nav Layer (_NAV) when held.
 *   - MEH_T(KC_ENT): Enter when tapped, Meh modifier (Ctrl+Shift+Alt) when held.
 *   - TG(_GAME): Toggles the one-handed Gaming Layer (_GAME) on/off.
 *   - MO(_SYMBOL): Momentarily activates the Symbol Layer (_SYMBOL).
 *   - Tri-Layer Option: Holding both MO(_SYMBOL) and MO(_FKEYS) automatically
 *     activates the Adjust Layer (_ADJUST).
 *   - DEL_WRD: Dedicated Option/Alt + Backspace key for deleting words on macOS.
 *   - Dynamic Macros: Replaces previous custom C macros (KVM_SWT, COPYADDR, MD_CODE, LOCK).
 *     Record sequences directly from the keyboard:
 *       1. Go to ADJUST layer (hold SYMBOL + FKEYS).
 *       2. Tap DM_REC1 (or DM_REC2) to start recording Macro 1 (or 2).
 *       3. Type the keys you want to record (e.g. lock screen shortcut).
 *       4. Tap DM_RSTP to stop recording.
 *       5. Tap DM_PLY1 (or DM_PLY2) anytime in ADJUST layer to play back.
 * 
 *  Dynamic Layout Detection:
 *   - If compiled for Preonic (5 rows), it includes a physical number row on top.
 *   - If compiled for Planck (4 rows), it uses the standard 48-key grid.
 */

#ifdef KEYBOARD_preonic

// =========================================================================
//  PREONIC (5x12 Grid Layout)
// =========================================================================
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_preonic_grid(
        // Row 1: Physical number row
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        // Row 2: Matches Planck Row 1
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        // Row 3: Matches Planck Row 2
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT(_NAV, KC_SCLN), KC_QUOT,
        // Row 4: Matches Planck Row 3
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        // Row 5: Matches Planck Row 4 (chime keys replaced with modifier and DEL_WRD keys)
        FKEYS,   KC_LCTL, DEL_WRD, KC_LGUI, FKEYS,   MO(_SYMBOL), KC_SPC, MEH_T(KC_ENT), KC_LALT, _______, _______, FKEYS
    ),

    [_SYMBOL] = LAYOUT_preonic_grid(
        // Row 1: Pass-through to base
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        // Row 3
        KC_TILD, KC_LPRN, KC_RPRN, KC_HASH, KC_EQL,  KC_PERC, KC_CIRC, KC_MINS, KC_ASTR, KC_LCBR, KC_RCBR, KC_LBRC,
        // Row 4
        KC_PIPE, KC_EXLM, KC_AT,   KC_PLUS, KC_DLR,  KC_COLN, KC_UNDS, KC_AMPR, KC_LT,   KC_GT,   KC_BSLS, KC_RBRC,
        // Row 5
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FKEYS] = LAYOUT_preonic_grid(
        // Row 1: Pass-through
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, _______, MS_UP,    _______, _______, KC_DEL,
        // Row 3
        KC_LCTL, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLU, _______,
        // Row 4
        _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  _______,
        // Row 5
        _______, _______, _______, _______, _______, _______, _______, MS_BTN1, MS_BTN2, _______, _______, _______
    ),

    [_NAV] = LAYOUT_preonic_grid(
        // Row 1: Pass-through
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        _______, _______, _______, WORD_R,  _______, _______, _______, KC_PGUP, LINE_R,  LINE_L,  _______, _______,
        // Row 3
        _______, _______, _______, KC_PGDN, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        // Row 4
        _______, _______, CUT,     COPY,    PASTE,   WORD_L,  _______, _______, _______, _______, _______, _______,
        // Row 5
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_GAME] = LAYOUT_preonic_grid(
        // Row 1: Pass-through
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 3
        KC_LCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SCLN, _______,
        // Row 4
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 5
        TG(_GAME), KC_ESC, _______, FKEYS,   KC_SPC,  _______, _______, _______, _______, _______, XBX_IMG, XBX_MOV
    ),

    [_ADJUST] = LAYOUT_preonic_grid(
        // Row 1: Pass-through
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        // Row 2
        _______, UG_HUEU, UG_HUED, UG_TOGG, DM_REC1, DM_RSTP, _______, _______, _______, _______, _______, _______,
        // Row 3
        MAC_LOK, UG_SATU, UG_SATD, _______, DM_PLY1, TG(_GAME), _______, _______, _______, CAP_LST, CAP_IMG, CAP_MOV,
        // Row 4
        QK_BOOT, _______, _______, _______, _______, _______, CG_TOGG, _______, _______, _______, _______, KC_MPLY,
        // Row 5
        _______, _______, _______, _______, _______, _______, EMOJI,   _______, _______, _______, _______, _______
    )
};

#else

// =========================================================================
//  PLANCK (4x12 Grid Layout)
// =========================================================================
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_planck_grid(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT(_NAV, KC_SCLN), KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        FKEYS,   KC_LCTL, DEL_WRD, KC_LGUI, FKEYS,   MO(_SYMBOL), KC_SPC, MEH_T(KC_ENT), KC_LALT, _______, _______, FKEYS
    ),

    [_SYMBOL] = LAYOUT_planck_grid(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_TILD, KC_LPRN, KC_RPRN, KC_HASH, KC_EQL,  KC_PERC, KC_CIRC, KC_MINS, KC_ASTR, KC_LCBR, KC_RCBR, KC_LBRC,
        KC_PIPE, KC_EXLM, KC_AT,   KC_PLUS, KC_DLR,  KC_COLN, KC_UNDS, KC_AMPR, KC_LT,   KC_GT,   KC_BSLS, KC_RBRC,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FKEYS] = LAYOUT_planck_grid(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, _______, MS_UP,    _______, _______, KC_DEL,
        KC_LCTL, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLU, _______,
        _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  _______,
        _______, _______, _______, _______, _______, _______, _______, MS_BTN1, MS_BTN2, _______, _______, _______
    ),

    [_NAV] = LAYOUT_planck_grid(
        _______, _______, _______, WORD_R,  _______, _______, _______, KC_PGUP, LINE_R,  LINE_L,  _______, _______,
        _______, _______, _______, KC_PGDN, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, CUT,     COPY,    PASTE,   WORD_L,  _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_GAME] = LAYOUT_planck_grid(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SCLN, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TG(_GAME), KC_ESC, _______, FKEYS,   KC_SPC,  _______, _______, _______, _______, _______, XBX_IMG, XBX_MOV
    ),

    [_ADJUST] = LAYOUT_planck_grid(
        _______, UG_HUEU, UG_HUED, UG_TOGG, DM_REC1, DM_RSTP, _______, _______, _______, _______, _______, _______,
        MAC_LOK, UG_SATU, UG_SATD, _______, DM_PLY1, TG(_GAME), _______, _______, _______, CAP_LST, CAP_IMG, CAP_MOV,
        QK_BOOT, _______, _______, _______, _______, _______, CG_TOGG, _______, _______, _______, _______, KC_MPLY,
        _______, _______, _______, _______, _______, _______, EMOJI,   _______, _______, _______, _______, _______
    )
};

#endif

// =========================================================================
//  QMK User Layer Callback (Tri-Layer Setup)
// =========================================================================
layer_state_t layer_state_set_user(layer_state_t state) {
    // Automatically activates the _ADJUST layer when holding both _SYMBOL and _FKEYS.
    return update_tri_layer_state(state, _SYMBOL, _FKEYS, _ADJUST);
}
