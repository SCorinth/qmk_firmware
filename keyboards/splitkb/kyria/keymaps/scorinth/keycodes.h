#pragma once

#include "quantum.h"

enum layers {
    _DVORAK = 0,
    _QWERTY,
    _PLOVER,
    _NAV,
    _SYM,
    _FUNCTION,
    _ADJUST,
};

enum custom_keycodes {
    ENC_MODE_L = SAFE_RANGE,
    ENC_MODE_R,
    TMB_MODE,
};

#define ESC_RAISE LT(_RAISE, KC_ESC)
#define BSLS_RAISE LT(_RAISE, KC_BSLS)
#define SFT_QUOT MT(MOD_RSFT, KC_QUOT)
#define CTL_MINS MT(MOD_RCTL, KC_MINS)
