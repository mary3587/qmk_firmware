// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define layout_first( \
    k00, k01, k02, k03, k04, k05, \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, \
    k30 \
) { \
    { k00, k01, k02, k03, k04, k05 }, /* Row 0 / \
    { k10, k11, k12, k13, k14, k15 }, / Row 1 / \
    { k20, k21 }, / Row 2 / \
    { k30 }  / Row 3 */ \
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = layout_first(
        KC_M, KC_Q, KC_W, KC_E, KC_R, KC_P,
        KC_TAB, KC_A, KC_S, KC_D, KC_C, KC_H,
        KC_LEFT_SHIFT, KC_F,
        KC_SPACE
    )
};
