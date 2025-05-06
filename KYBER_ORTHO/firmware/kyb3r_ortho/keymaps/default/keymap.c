// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * +---+---+---+---+---+---+---+---+---+---+
     * | < | J | P | W | C | M | Y | B | X | ; |
     * +---+---+---+---+---+---+---+---+---+---+
     * | R | H | N | S | O | A | E | I | T | L |
     * +---+---+---+---+---+---+---+---+---+---+
     * | / | Z | V | F | U | D | G | K | Q | > |
     * +---+---+---+---+---+---+---+---+---+---+
     *               | SPC | ENT |
     *               +-----+-----+
     *
     */
    [0] = LAYOUT_kyb3r_3x10(
        KC_COMM,   KC_J,   KC_P,   KC_W,   KC_C,   KC_M,  KC_Y,  KC_B,  KC_X,  KC_SCLN,
        KC_R,      KC_H,   KC_N,   KC_S,   KC_O,   KC_A,  KC_E,  KC_I,  KC_T,  KC_L,
        KC_SLSH,   KC_Z,   KC_V,   KC_F,   KC_U,   KC_D,  KC_G,  KC_K,  KC_Q,  LT(3, KC_DOT),
                                  LT(2, KC_SPC),   LT(1, KC_ENT)
    ),

    [1] = LAYOUT_kyb3r_3x10(
        KC_MINUS,      KC_HASH,   KC_LBRC, KC_LT,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_BSPC,
        KC_GRAVE,      KC_DQUO,   KC_EQL,  KC_RPRN, KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LCTL,
        LSFT(KC_BSLS), KC_AMPR,   KC_RBRC, KC_GT,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_RSFT,
                                          KC_SPC,   KC_ENT
    ),

    [2] = LAYOUT_kyb3r_3x10(
        KC_TAB,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_HOME, KC_PGUP,  KC_NO,   KC_NO,  KC_NO,
        KC_ESC,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_LEFT,  KC_DOWN, KC_UP,  KC_RIGHT,
        KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO,   KC_END,  KC_PGDN,  KC_NO,   KC_NO,  KC_NO,
                                     KC_SPC,   KC_ENT
    ),

    [3] = LAYOUT_kyb3r_3x10(
        LSFT(KC_1), LSFT(KC_J), LSFT(KC_P), LSFT(KC_W), LSFT(KC_C), LSFT(KC_M), LSFT(KC_Y), LSFT(KC_B), LSFT(KC_X), LSFT(KC_SCLN),
        KC_1,    KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,
        KC_BSLS,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                         KC_SPC,   KC_ENT
    )

};
