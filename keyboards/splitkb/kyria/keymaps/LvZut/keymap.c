// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.h
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include QMK_KEYBOARD_H
#include "print.h"
#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

// non-KC_ keycodes
#define KC_RST KC_NO // RESET
#define KC_TOG KC_NO // RGB_TOG
#define KC_MOD KC_NO // RGB_MOD
#define KC_HUI KC_NO // RGB_HUI
#define KC_SAI KC_NO // RGB_SAI
#define KC_VAI KC_NO // RGB_VAI



enum layers { BASE, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL, GAME };


// copied from users/manna-harbour_miryoku/manna-harbour_miryoku.c
// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// #if defined MIRYOKU_ALPHAS_COLEMAKDH
[BASE] = LAYOUT_miryoku(
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
KC_NP,             KC_NP,             LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  TG(GAME),          KC_MUTE
),
// #else
//   [BASE] = LAYOUT_miryoku(
//     KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
//     LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
//     KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
//     KC_NP,             KC_NP,             LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_MUTE
//   ),
// #endif
#if defined MIRYOKU_NAV_VI
  [NAVR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_ENT,  KC_BSPC, KC_DEL,  KC_NP,   KC_MUTE
  ),
  [MOUR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NU,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_MUTE
  ),
  [MEDR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NU,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_MSTP, KC_MPLY, KC_MUTE, KC_NP,   KC_MUTE
  ),
#else
  [NAVR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_ENT,  KC_BSPC, KC_DEL,  KC_NP,   KC_MUTE
  ),
  [MOUR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_MUTE
  ),
  [MEDR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_MSTP, KC_MPLY, KC_MUTE, KC_NP,   KC_MUTE
  ),
#endif
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NP,   KC_NP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_MUTE
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_LSCR, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    KC_NP,   KC_NP,   KC_APP,  KC_SPC,  KC_TAB,  KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_MUTE
  ),
  [NSL] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    KC_NP,   KC_NP,   KC_DOT,  KC_0,    KC_MINS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_MUTE
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    KC_NP,   KC_NP,   KC_LPRN, KC_RPRN, KC_UNDS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_MUTE
  ),
  [GAME] = LAYOUT(
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
    KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_UP,    KC_ENT,
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_TILDE, KC_LBRC,        KC_RBRC,   KC_SLSH, KC_N,    KC_M,    KC_COMM, KC_LEFT, KC_DOWN,  KC_RIGHT,
                                KC_LALT, KC_MENU, KC_SPC, KC_ENT,   KC_LSFT,      KC_RSFT, KC_ENT,  KC_SPC,  TG(GAME), KC_MUTE
    )
};

// Layer-specific encoder knob functions
#ifdef ENCODER_ENABLE
// { BASE, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL, GAME }
bool encoder_update_user(uint8_t index, bool clockwise) {
    print("enter func");
    if (index == 1) {
        print("enter encoder");
        switch(biton32(layer_state)) {
            case 2:
                print("case 2");
                if (clockwise) {
                    tap_code16(KC_MFFD);
                } else {
                    tap_code16(KC_MRWD);
                }
                break;
            case 7:
                print("case 7");
                if (clockwise) {
                    tap_code16(C(KC_RIGHT));
                } else {
                    tap_code16(C(KC_LEFT));
                }
                break;
            case 3:
                print("case 3");
                if (clockwise) {
                    tap_code16(KC_MS_WH_UP);
                } else {
                    tap_code16(KC_MS_WH_DOWN);
                }
                break;
            default:
                print("case default");
                if (get_mods() & MOD_BIT(KC_LCTL)) {
                    print("default ctrl");
                    if (clockwise) {
                        tap_code16(S(C(KC_Z))); // Redo (MacOS)
                    } else {
                        tap_code16(C(KC_Z)); // Undo (MacOS)
                    }
                  break;
                }
                else if (get_mods() & MOD_BIT(KC_LALT)) {
                    print("default alt");
                    if (clockwise) {
                        tap_code16(A(KC_TAB)); // alt+tab
                    } else {
                        tap_code16(S(A(KC_TAB))); // shift+alt+tab
                    }
                  break;
                } else {
                    print("default vol");
                    if (clockwise) {
                        tap_code16(KC_VOLU);
                    } else {
                        tap_code16(KC_VOLD);
                    }
                    break;
                }
        }
    }
    return false;
}
#endif


void keyboard_pre_init_user(void) {
    setPinOutput(24);  // Set pin 24 as output
    writePinHigh(24);  // Set pin 24 to high
}
