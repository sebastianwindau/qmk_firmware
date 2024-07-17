/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
#include "sendstring_german_mac_iso.h"

// clang-format off
enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
};

enum my_keycodes {
    CUS_TELE=NEW_SAFE_RANGE,
    CUS_GITF,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_69_iso(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,          KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,          KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      TO(FN2),
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     LT(FN2,KC_K),  KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_PGUP,
        KC_LSFT,  KC_GRV,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,          KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                      KC_RCMMD,MO(MAC_FN1),MO(FN2), KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_BASE] = LAYOUT_69_iso(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      KC_HOME,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_PGUP,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_PGDN,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN1),MO(FN2), KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN1] = LAYOUT_69_iso(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_FN1] = LAYOUT_69_iso(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN2] = LAYOUT_69_iso(
        KC_TILD,  KC_F1,                   KC_F2,             KC_F3,       KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,     KC_F9,   KC_F10,   KC_F11,   KC_F12,  _______,                 QK_BOOT,
        _______,  LALT(LGUI(KC_R)),        KC_F7,             KC_F8,  LGUI(KC_R),  CUS_TELE,  _______,  _______,  _______,   _______,  _______,  _______,  _______,                      TO(MAC_BASE),
        _______,  LCTL(LSFT(KC_R)),  LGUI(KC_F2),  LCTL(LSFT(KC_D)),     _______,  _______,   _______,  _______,  _______,  CUS_GITF,  _______,  _______,  _______,  _______,                 _______,
        _______,  _______,               _______,           _______,     _______,  _______,   BAT_LVL,  _______,  _______,   _______,  _______,  _______,            _______,  _______,       _______,
        _______,  _______,               _______,                                             _______,                                 _______,  _______,  _______,  _______,  _______,       _______),
};

void change_color_led_matrix_layer_fn2_user(void) {

  	rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_empty_effect);

    for (uint8_t i = 0; i <= RGB_MATRIX_LED_COUNT; i++) {
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
    }
	rgb_matrix_set_color(1, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(2, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(3, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(4, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(5, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(6, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(7, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(8, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(9, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(10, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(11, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(12, 0xff, 0xff, 0xff);
	rgb_matrix_set_color(16, 0xff, 0x00, 0xff);
	rgb_matrix_set_color(17, 0x00, 0xff, 0x00);
	rgb_matrix_set_color(18, 0x00, 0x00, 0xff);
	rgb_matrix_set_color(19, 0x00, 0xff, 0xff);
	rgb_matrix_set_color(20, 0x00, 0x00, 0xff);
	rgb_matrix_set_color(30, 0x00, 0xff, 0x00);
	rgb_matrix_set_color(31, 0xff, 0x00, 0x00);
	rgb_matrix_set_color(32, 0xff, 0xff, 0x00);
	rgb_matrix_set_color(38, 0x00, 0xff, 0x00);
}

void change_color_led_matrix_layer_fn1_user(void) {
     rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_empty_effect);
     rgb_matrix_set_color(1, 0x00, 0x00, 0xff);
     rgb_matrix_set_color(2, 0x00, 0x00, 0xff);
     rgb_matrix_set_color(3, 0xff, 0xff, 0xff);
     rgb_matrix_set_color(4, 0xff, 0xff, 0xff);
     rgb_matrix_set_color(5, 0xff, 0xff, 0xff);
     rgb_matrix_set_color(6, 0xff, 0xff, 0xff);
     rgb_matrix_set_color(7, 0x00, 0xff, 0x00);
     rgb_matrix_set_color(8, 0x00, 0xff, 0x00);
     rgb_matrix_set_color(9, 0x00, 0xff, 0x00);
     rgb_matrix_set_color(10, 0xff, 0x00, 0x00);
     rgb_matrix_set_color(11, 0xff, 0x00, 0x00);
     rgb_matrix_set_color(12, 0xff, 0x00, 0x00);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CUS_TELE:
            if (record->event.pressed) {
				SEND_STRING(SS_LGUI("t") "https://access.gridscale.dev/web/login?redirect_uri=https://access.gridscale.dev/web" SS_TAP(X_ENT));
	    	}
	    	break;
		case CUS_GITF:
            if (record->event.pressed) {
                SEND_STRING("git push --force-with-lease");
            }
            break;
        return false;
    	}

    return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {
	switch(biton32(state)) {
		case FN2:
			change_color_led_matrix_layer_fn2_user();
			//rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);
			//rgb_matrix_set_color_all(0x00, 0xff, 0xff);
    		break;
		case MAC_FN1:
			change_color_led_matrix_layer_fn1_user();
			break;
		default:
			//change_color_led_matrix_user();
    		rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);
			break;
  	}
	return state;
}
