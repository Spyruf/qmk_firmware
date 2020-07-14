/* Copyright 2019 MechMerlin
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_tkl_ansi(\
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,       KC_MUTE, KC_VOLD, KC_VOLU, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_MPLY, KC_MPRV, KC_MNXT, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_DEL,  KC_END,  KC_PGDN, \
        MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                  \
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,               KC_UP,            \
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, MO(1),   TG(3),        KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [1] = LAYOUT_tkl_ansi(
        RESET,           LALT(KC_F1),   LALT(KC_F2),   LALT(KC_F3),   LALT(KC_F4),   LALT(KC_F5),   LALT(KC_F6),   LALT(KC_F7),   LALT(KC_F8),   LALT(KC_F9),   LALT(KC_F10),  LALT(KC_F11),  LALT(KC_F12),       LALT(KC_MUTE), KC_SLCK, KC_PAUS, \
        LALT(KC_GRV),  LALT(KC_1),    LALT(KC_2),    LALT(KC_3),    LALT(KC_4),    LALT(KC_5),    LALT(KC_6),    LALT(KC_7),    LALT(KC_8),    LALT(KC_9),    LALT(KC_0),    LALT(KC_MINS), LALT(KC_EQL),  LALT(KC_BSPC),      LALT(KC_MPLY), LALT(KC_MPRV), LALT(KC_MNXT), \
        LALT(KC_TAB),  LALT(KC_Q),    LALT(KC_W),    LALT(KC_E),    LALT(KC_R),    LALT(KC_T),    LALT(KC_Y),    LALT(KC_U),    (KC_UP),    LALT(KC_O),    LALT(KC_P),    LALT(KC_LBRC), LALT(KC_RBRC), LALT(KC_BSLS),      LALT(KC_DEL),  LALT(KC_END),  LALT(KC_PGDN), \
        KC_TRNS,   LALT(KC_A),    LALT(KC_S),    LALT(KC_D),    LALT(KC_F),    LALT(KC_G),    LALT(KC_H),    (KC_LEFT),    (KC_DOWN),    (KC_RGHT),    LALT(KC_SCLN), LALT(KC_QUOT),          LALT(KC_ENT),                                  \
        LALT(KC_LSFT),          LALT(KC_Z),    LALT(KC_X),    LALT(KC_C),    LALT(KC_V),    LALT(KC_B),    LALT(KC_N),    LALT(KC_M),    LALT(KC_COMM), LALT(KC_DOT),  LALT(KC_SLSH),          LALT(KC_RSFT),               LALT(KC_UP),            \
        LALT(KC_LCTL), LALT(KC_LALT), LM(2,MOD_LALT),                            LALT(KC_SPC),                             LALT(KC_RGUI), LALT(KC_RALT), MO(1),   TG(3),        LALT(KC_LEFT), LALT(KC_DOWN), LALT(KC_RGHT)  \
    ),
    [2] = LAYOUT_tkl_ansi(
        LGUI(KC_ESC),           LGUI(KC_F1),   LGUI(KC_F2),   LGUI(KC_F3),   LGUI(KC_F4),   LGUI(KC_F5),   LGUI(KC_F6),   LGUI(KC_F7),   LGUI(KC_F8),   LGUI(KC_F9),   LGUI(KC_F10),  LGUI(KC_F11),  LGUI(KC_F12),       LGUI(KC_MUTE), LGUI(KC_VOLD), LGUI(KC_VOLU), \
        LGUI(KC_GRV),  LGUI(KC_1),    LGUI(KC_2),    LGUI(KC_3),    LGUI(KC_4),    LGUI(KC_5),    LGUI(KC_6),    LGUI(KC_7),    LGUI(KC_8),    LGUI(KC_9),    LGUI(KC_0),    LGUI(KC_MINS), LGUI(KC_EQL),  LGUI(KC_BSPC),      LGUI(KC_MPLY), LGUI(KC_MPRV), LGUI(KC_MNXT), \
        LGUI(KC_TAB),  LGUI(KC_Q),    LGUI(KC_W),    LGUI(KC_E),    LGUI(KC_R),    LGUI(KC_T),    LGUI(KC_Y),    LGUI(KC_U),    LALT(KC_UP),    LGUI(KC_O),    LGUI(KC_P),    LGUI(KC_LBRC), LGUI(KC_RBRC), LGUI(KC_BSLS),      LGUI(KC_DEL),  LGUI(KC_END),  LGUI(KC_PGDN), \
        KC_TRNS,   LGUI(KC_A),    LGUI(KC_S),    LGUI(KC_D),    LGUI(KC_F),    LGUI(KC_G),    LGUI(KC_H),    LALT(KC_LEFT),    LALT(KC_DOWN),    LALT(KC_RGHT),    LGUI(KC_SCLN), LGUI(KC_QUOT),          LGUI(KC_ENT),                                  \
        LGUI(KC_LSFT),          LGUI(KC_Z),    LGUI(KC_X),    LGUI(KC_C),    LGUI(KC_V),    LGUI(KC_B),    LGUI(KC_N),    LGUI(KC_M),    LGUI(KC_COMM), LGUI(KC_DOT),  LGUI(KC_SLSH),          LGUI(KC_RSFT),               LGUI(KC_UP),            \
        LGUI(KC_LCTL), LGUI(KC_LGUI), LGUI(KC_LGUI),                            LGUI(KC_SPC),                             LGUI(KC_RGUI), LGUI(KC_RALT), MO(1),   TG(3),        LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RGHT)  \
    ),
    [3] = LAYOUT_tkl_ansi(
        KC_ESC,           C(KC_F1),C(KC_F2),C(KC_F3),C(KC_F4),C(KC_F5),C(KC_F6),C(KC_F7),C(KC_F8),C(KC_F9),C(KC_F10),C(KC_F11),C(KC_F12),     KC_MUTE, KC_VOLD, KC_VOLU, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_MPLY, KC_MPRV, KC_MNXT, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_DEL,  KC_END,  KC_PGDN, \
        MO(4), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                  \
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,               KC_UP,            \
        KC_LALT, KC_LGUI, KC_LCTL,                            KC_SPC,                             KC_RCTL, KC_RGUI, MO(1),   TG(3),        KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [4] = LAYOUT_tkl_ansi(
        RESET,           LCTL(KC_F1),   LCTL(KC_F2),   LCTL(KC_F3),   LCTL(KC_F4),   LCTL(KC_F5),   LCTL(KC_F6),   LCTL(KC_F7),   LCTL(KC_F8),   LCTL(KC_F9),   LCTL(KC_F10),  LCTL(KC_F11),  LCTL(KC_F12),       LCTL(KC_MUTE), LCTL(KC_VOLD), LCTL(KC_VOLU), \
        LCTL(KC_GRV),  LCTL(KC_1),    LCTL(KC_2),    LCTL(KC_3),    LCTL(KC_4),    LCTL(KC_5),    LCTL(KC_6),    LCTL(KC_7),    LCTL(KC_8),    LCTL(KC_9),    LCTL(KC_0),    LCTL(KC_MINS), LCTL(KC_EQL),  LCTL(KC_BSPC),      LCTL(KC_MPLY), LCTL(KC_MPRV), LCTL(KC_MNXT), \
        LCTL(KC_TAB),  LCTL(KC_Q),    LCTL(KC_W),    LCTL(KC_E),    LCTL(KC_R),    LCTL(KC_T),    LCTL(KC_Y),    LCTL(KC_U),    (KC_UP),    LCTL(KC_O),    LCTL(KC_P),    LCTL(KC_LBRC), LCTL(KC_RBRC), LCTL(KC_BSLS),      LCTL(KC_DEL),  LCTL(KC_END),  LCTL(KC_PGDN), \
        KC_TRNS,   LCTL(KC_A),    LCTL(KC_S),    LCTL(KC_D),    LCTL(KC_F),    LCTL(KC_G),    LCTL(KC_H),    (KC_LEFT),    (KC_DOWN),    (KC_RGHT),    LCTL(KC_SCLN), LCTL(KC_QUOT),          LCTL(KC_ENT),                                  \
        LCTL(KC_LSFT),          LCTL(KC_Z),    LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_V),    LCTL(KC_B),    LCTL(KC_N),    LCTL(KC_M),    LCTL(KC_COMM), LCTL(KC_DOT),  LCTL(KC_SLSH),          LCTL(KC_RSFT),               LCTL(KC_UP),            \
        LCTL(KC_LCTL), LCTL(KC_LALT), LM(2,MOD_LALT),                            LCTL(KC_SPC),                             LCTL(KC_RGUI), LCTL(KC_RALT), MO(1),   TG(3),        LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_RGHT)  \
    ),
};
