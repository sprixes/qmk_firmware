#include QMK_KEYBOARD_H
#include "common.h"
#include "../../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_tkl_ansi(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    LT(_NAV, KC_SCLN), KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        MO(_GEONIX), KC_LCTL, DEL_WRD, KC_LGUI, FKEYS,   MO(_SYMBOL), KC_SPC, MEH_T(KC_ENT), KC_LALT, _______, _______, FKEYS
    ),

    [_SYMBOL] = LAYOUT_tkl_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_TILD, KC_LPRN, KC_RPRN, KC_HASH, KC_EQL,  KC_PERC, KC_CIRC, KC_MINS, KC_ASTR, KC_LCBR, KC_RCBR, KC_LBRC,
        KC_PIPE, KC_EXLM, KC_AT,   KC_PLUS, KC_DLR,  KC_COLN, KC_UNDS, KC_AMPR, KC_LT,   KC_GT,   KC_BSLS, KC_RBRC,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FKEYS] = LAYOUT_tkl_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, _______, MS_UP,    _______, _______, KC_DEL,
        KC_LCTL, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLU, _______,
        _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  _______,
        _______, _______, _______, _______, _______, _______, _______, MS_BTN1, MS_BTN2, _______, _______, _______
    ),

    [_NAV] = LAYOUT_tkl_ansi(
        _______, _______, _______, WORD_R,  _______, _______, _______, KC_PGUP, LINE_R,  LINE_L,  _______, _______,
        _______, _______, _______, KC_PGDN, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, CUT,     COPY,    PASTE,   WORD_L,  _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_GAME] = LAYOUT_tkl_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SCLN, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TG(_GAME), KC_ESC, _______, FKEYS,   KC_SPC,  _______, _______, _______, _______, _______, XBX_IMG, XBX_MOV
    ),

    [_ADJUST] = LAYOUT_tkl_ansi(
        _______, UG_HUEU, UG_HUED, UG_TOGG, DM_REC1, DM_RSTP, _______, _______, _______, _______, _______, _______,
        MAC_LOK, UG_SATU, UG_SATD, _______, DM_PLY1, TG(_GAME), _______, _______, _______, CAP_LST, CAP_IMG, CAP_MOV,
        QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY,
        _______, _______, _______, _______, _______, _______, EMOJI,   _______, _______, _______, _______, _______
    ),

    [_GEONIX] = LAYOUT_tkl_ansi(
        MD_USB,  MD_BLE1, MD_BLE2,   MD_BLE3,  MD_24G,     RM_NEXT,   _______,  _______, _______, _______,  _______,  RM_TOGG,
        _______, _______, _______,   _______,  _______,    _______,   _______,  _______, _______, _______,  _______,  _______,  
        _______, _______, _______,   _______,  _______,    _______,   _______,  _______, _______, _______,  RM_VALU,  LOGO_MOD,
        _______, QK_DEB,  QK_BAT,    TIME_ST,  _______,    U_EE_CLR,  _______,  _______, _______, RM_SPDD,  RM_VALD,  RM_SPDU
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYMBOL, _FKEYS, _ADJUST);
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE]   = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_SYMBOL] = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_FKEYS]  = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_NAV]    = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_GAME]   = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_ADJUST] = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_GEONIX] = { ENCODER_CCW_CW(RM_SATD, RM_SATU) }
};
#endif
