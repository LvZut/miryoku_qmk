// copied from users/manna-harbour_miryoku/config.h
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-
// modify keymap: https://github.com/manna-harbour/qmk_firmware/commits/miryoku-examples-add-layers/keyboards/crkbd/keymaps/miryoku-examples-add-layers
#pragma once

// default but used in macros
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift and Retro Shift (Auto Shift for Tap Hold).
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define RETRO_SHIFT 500

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

#define ENCODER_RESOLUTION 2

#define XXX KC_NO

#if defined NOT_MIRYOKU_MAPPING_EXTENDED_THUMBS
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
KC_TAB, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, KC_BSPC, \
KC_LCTL, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, KC_RIGHT_CTRL, \
KC_LSFT, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, KC_RIGHT_SHIFT, \
               XXX, K32, K33, K34, XXX,      XXX, K35, K36, K37, XXX \
)
#else
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, K39, K40 \
) \
LAYOUT( \
KC_TAB, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, KC_BSPC, \
KC_LCTL, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, KC_RIGHT_CTRL, \
KC_LSFT, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, KC_RIGHT_SHIFT, \
               XXX, XXX, K32, K33, K34,      K35, K36, K37, K39, K40 \
)
#endif


#define LAYOUT_gaming( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, K39 \
) \
LAYOUT( \
K00, K01, K02, K03, K04, K05,                          K06, K07, K08, K09, K10, K11, \
K12, K13, K14, K15, K16, K17,                          K18, K19, K20, K21, K22, K23, \
K24, K25, K26, K27, K28, K29, K30, K31,      K32, K33, K34, K35, K36, K37, K38, K39, \
               K40, K41, K42, K43, K44,      K45, K46, K47, K48, K49 \
)
