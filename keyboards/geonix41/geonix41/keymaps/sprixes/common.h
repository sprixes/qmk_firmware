#pragma once
#include QMK_KEYBOARD_H

// Layer definitions
enum planck_layers {
    _BASE,
    _SYMBOL,
    _GAME,
    _FKEYS,
    _ADJUST,
    _NAV,
    _GEONIX,
};

// Safe range for any custom keycodes if needed in the future
enum planck_keycodes {
    QWERTY = SAFE_RANGE,
};

// Layer shortcuts and navigation helpers
#define FKEYS MO(_FKEYS)

// macOS Word navigation (Alt + Left/Right)
#define WORD_L LALT(KC_LEFT)
#define WORD_R LALT(KC_RIGHT)

// macOS Line navigation (Cmd + LeftBracket/RightBracket or Cmd + Left/Right arrow equivalents)
#define LINE_L LGUI(KC_LBRC)
#define LINE_R LGUI(KC_RBRC)

// Dedicated Delete Word key (Alt + Backspace for macOS)
#define DEL_WRD LALT(KC_BSPC)

// Browser/OS Tab navigation (Ctrl + Shift + Tab / Ctrl + Tab)
#define TAB_L LCTL(LSFT(KC_TAB))
#define TAB_R LCTL(KC_TAB)

// Clipboard controls
#define CUT   LGUI(KC_X)
#define COPY  LGUI(KC_C)
#define PASTE LGUI(KC_V)

// Emoji picker (Ctrl + Cmd + Space on macOS)
#define EMOJI LCTL(LGUI(KC_SPC))

// Lock macOS Screen (Ctrl + Cmd + Q)
#define MAC_LOK LCTL(LGUI(KC_Q))

// macOS Screen capture shortcuts
#define CAP_LST LGUI(LSFT(KC_7))        // Capture last screen region
#define CAP_IMG LGUI(LSFT(KC_4))        // Capture portion of screen
#define CAP_MOV LGUI(LSFT(KC_5))        // Capture video of screen

// Windows/Xbox shortcuts
#define XBX_IMG LGUI(LALT(KC_PSCR))     // Capture portion of screen
#define XBX_MOV LGUI(LALT(KC_G))        // Capture last 30 seconds
