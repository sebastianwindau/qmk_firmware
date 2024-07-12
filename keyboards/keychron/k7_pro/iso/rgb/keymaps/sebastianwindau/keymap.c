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

enum custom_keycodes {
    CUSTOM_CODES=SAFE_RANGE,
    CUS_TELE,
    CUS_GITF,
};

// clang-format off
enum layers{
  MAC_BASE,
  WIN_BASE,
  MAC_FN1,
  WIN_FN1,
  FN2,
};

/**
    "{KC_LGUI,KC_T}https{KC_LSFT,KC_DOT}{KC_LSFT,KC_7}{KC_LSFT,KC_7}access.gridscale.dev{KC_LSFT,KC_7}web{KC_LSFT,KC_7}cluster{KC_LSFT,KC_7}access.gridscale.dev{KC_LSFT,KC_7}resources{KC_ENT}" 5
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_69_iso(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,          KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,          KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      DF(FN2),
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
        KC_TILD,  KC_F1,                   KC_F2,             KC_F3,       KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,     KC_F9,   KC_F10,   KC_F11,   KC_F12,  _______,                 _______,
        _______,  LALT(LGUI(KC_R)),        KC_F7,             KC_F8,  LGUI(KC_R),  CUS_TELE,  _______,  _______,  _______,   _______,  _______,  _______,  _______,                      DF(MAC_BASE),
        _______,  LCTL(LSFT(KC_R)),  LGUI(KC_F2),  LCTL(LSFT(KC_D)),     _______,  _______,   _______,  _______,  _______,  CUS_GITF,  _______,  _______,  _______,  _______,                 _______,
        _______,  _______,               _______,           _______,     _______,  _______,   BAT_LVL,  _______,  _______,   _______,  _______,  _______,            _______,  _______,       _______,
        _______,  _______,               _______,                                             _______,                                 _______,  _______,  _______,  _______,  _______,       _______),
};

void change_color_led_matrix_user(void) {
    rgb_matrix_mode(RGB_MATRIX_NONE);
    for (uint8_t i = 0; i <= RGB_MATRIX_LED_COUNT; i++) {
        rgb_matrix_set_color(i, 0, 0, 255);
    }
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
                SEND_STRING("git push --force-with-leaase");
            }
            break;
        return false;
    }

    return true;
}

