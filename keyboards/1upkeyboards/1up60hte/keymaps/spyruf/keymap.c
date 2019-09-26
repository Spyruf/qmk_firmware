/*
Copyright 2019 Bubnick

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// 	[0] = LAYOUT_tsangan(
// 		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
// 		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
// 		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
// 		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
// 		KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL),

// 	[1] = LAYOUT_tsangan(
// 		RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
// 		KC_CAPS, BL_TOGG, BL_DEC,  BL_INC,  BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLCK,  KC_PAUS, KC_UP,   KC_TRNS, KC_CLR,
// 		KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_MPRV, KC_MNXT, RGB_VAD, KC_HOME, KC_PGUP,  KC_LEFT, KC_RGHT, KC_TRNS,
// 		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, KC_END, KC_PGDN,   KC_DOWN, KC_TRNS, KC_TRNS,
// 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
// };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_tsangan(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(1),
		KC_LCTL, KC_LCTL, KC_LGUI, KC_SPC, KC_RGUI, KC_RCTL, KC_RALT),

	[1] = LAYOUT_tsangan(
		RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_MUTE, KC_VOLD, KC_VOLU, KC_F9, KC_F10,
		LALT(KC_TAB), BL_TOGG, BL_DEC, BL_INC, BL_BRTG, LALT(KC_T), LALT(KC_Y), LALT(KC_U), (KC_UP), LALT(KC_O),KC_MPLY,KC_MPRV,KC_MNXT, LALT(KC_BSPC),
        KC_TRNS, LALT(KC_A), LALT(KC_S), LALT(KC_D), LALT(KC_F), LALT(KC_G), LALT(KC_H), (KC_LEFT), (KC_DOWN), (KC_RIGHT), LALT(KC_SCLN), LALT(KC_QUOT), LALT(KC_ENT),
        LALT(KC_LSFT), LALT(KC_Z), LALT(KC_X), LALT(KC_C), LALT(KC_V), LALT(KC_B), LALT(KC_N), LALT(KC_M), LALT(KC_COMM), LALT(KC_DOT), LALT(KC_SLSH), LALT(KC_RSFT), KC_TRNS,
        LALT(KC_LCTL), LALT(KC_LCTL), LM(2,MOD_LALT), LALT(KC_SPC), LALT(KC_RGUI), LALT(KC_RCTL),LALT(KC_RCTL)),

	[2] = LAYOUT_tsangan(
		RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_MUTE, KC_VOLD, KC_VOLU, KC_F9, KC_F10,
		LGUI(KC_TAB), LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T), LGUI(KC_Y), LGUI(KC_U), (KC_UP), LGUI(KC_O),KC_MPLY,KC_MPRV,KC_MNXT, LGUI(KC_BSPC),
        KC_TRNS, LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G), LGUI(KC_H), (KC_LEFT), (KC_DOWN), (KC_RIGHT), LGUI(KC_SCLN), LGUI(KC_QUOT), LGUI(KC_ENT),
        LGUI(KC_LSFT), LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LGUI(KC_B), LGUI(KC_N), LGUI(KC_M), LGUI(KC_COMM), LGUI(KC_DOT), LGUI(KC_SLSH), LGUI(KC_RSFT), LGUI(KC_DEL),
        LGUI(KC_LCTL), LGUI(KC_LCTL), KC_TRNS, LGUI(KC_SPC), LGUI(KC_RGUI), LGUI(KC_RCTL),LGUI(KC_RCTL)),

};

void matrix_init_user(void) {
  setPinOutput(B6);
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {
	if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
		writePinLow(B6);
	} else {
		writePinHigh(B6);
	}
}
