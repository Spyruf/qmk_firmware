/* Copyright 2019 Fox Lab
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

	LAYOUT_all(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_DEL,
		KC_NO, KC_LCTL, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, KC_RGUI, MO(1), KC_NO),

	LAYOUT_all(
		RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F9, KC_F10, KC_MUTE, KC_VOLD, KC_VOLU, LALT(KC_BSPC), LALT(KC_BSPC),
		LALT(KC_TAB), LALT(KC_Q), LALT(KC_W), LALT(KC_E), LALT(KC_R), LALT(KC_T), LALT(KC_Y), LALT(KC_U), (KC_UP), LALT(KC_O),KC_MPLY,KC_MPRV,KC_MNXT, LALT(KC_BSLS),
        KC_TRNS, LALT(KC_A), LALT(KC_S), LALT(KC_D), LALT(KC_F), LALT(KC_G), LALT(KC_H), (KC_LEFT), (KC_DOWN), (KC_RIGHT), LALT(KC_SCLN), LALT(KC_QUOT), LALT(KC_ENT),
        LALT(KC_LSFT), LALT(KC_NO), LALT(KC_Z), LALT(KC_X), LALT(KC_C), LALT(KC_V), LALT(KC_B), LALT(KC_N), LALT(KC_M), LALT(KC_COMM), LALT(KC_DOT), LALT(KC_SLSH), LALT(KC_RSFT), LALT(KC_DEL),
        KC_NO, LALT(KC_LCTL), LM(2,MOD_LALT), LALT(KC_SPC), LALT(KC_SPC), LALT(KC_SPC), LALT(KC_RGUI), LALT(KC_RGUI),KC_NO,KC_NO),

    LAYOUT_all(
		RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_MUTE, KC_VOLD, KC_VOLU, LGUI(KC_BSPC), LGUI(KC_BSPC),
		LGUI(KC_TAB), LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T), LGUI(KC_Y), LGUI(KC_U), (KC_UP), LGUI(KC_O),KC_MPLY,KC_MPRV,KC_MNXT, LGUI(KC_BSLS),
        KC_TRNS, LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G), LGUI(KC_H), (KC_LEFT), (KC_DOWN), (KC_RIGHT), LGUI(KC_SCLN), LGUI(KC_QUOT), LGUI(KC_ENT),
        LGUI(KC_LSFT), LGUI(KC_NO), LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), LGUI(KC_N), LGUI(KC_M), LGUI(KC_COMM), LGUI(KC_DOT), LGUI(KC_SLSH), LGUI(KC_RSFT), LGUI(KC_DEL),
        KC_NO, LGUI(KC_LCTL), KC_TRNS, LGUI(KC_SPC), LGUI(KC_SPC), LGUI(KC_SPC), LGUI(KC_RGUI), LGUI(KC_RGUI),KC_NO,KC_NO),

};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
