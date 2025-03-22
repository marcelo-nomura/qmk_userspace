/* Copyright (C) 2023 jonylee@hfd
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

// clang-format on

#include QMK_KEYBOARD_H

enum LAYERS
  {
    BASE,
    LP,
    LN,
    LP_RP,
    LP_RN,
    RP,
    RN,
    RP_LP,
    RP_LN
  };
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT_planck_mit(
			     QK_BOOTLOADER, KC_NO, KC_NO, KC_I, KC_NO, KC_NO,  KC_NO, KC_NO, KC_D, KC_NO, KC_NO, QK_BOOTLOADER, \
			     LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_NO, KC_NO, \
			     KC_NO, KC_NO, LSFT_T(KC_H), LCTL_T(KC_T), LALT_T(KC_N), LGUI_T(KC_S), \
			     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
			     QK_COMBO_TOGGLE, KC_NO, KC_NO, MO(LN), MO(LP), KC_NO,\
			     MO(RP), MO(RN), KC_NO, KC_NO, QK_COMBO_TOGGLE
			     ),
  [LP] = LAYOUT_planck_mit(
			   KC_NO, KC_NO, KC_NO, KC_Y, KC_NO, KC_NO, \
			   KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO,	\
			   LGUI_T(KC_QUOTE), LALT_T(KC_COMMA), LCTL_T(KC_DOT), LSFT_T(KC_P), KC_NO, KC_NO, \
			   KC_NO, KC_NO,  LSFT_T(KC_LEFT), LCTL_T(KC_DOWN), LALT_T(KC_UP), LGUI_T(KC_LEFT), \
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	\
			   KC_NO, KC_NO, KC_NO, MO(LN), KC_TRNS, KC_NO,	\
			   KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
			   // MO(LP_RP), MO(LP_RN), KC_NO, KC_NO, KC_NO
			   ),
  
  [LN] = LAYOUT_planck_mit(
			   KC_NO, KC_NO, KC_NO, KC_X, KC_NO, KC_NO,\
			   KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO,	\
			   LGUI_T(KC_SEMICOLON), LALT_T(KC_Q), LCTL_T(KC_J), LSFT_T(KC_K), KC_NO, KC_NO,\
			   KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	\
			   KC_NO, KC_NO, KC_NO, KC_TRNS, MO(LP), KC_NO,\
			   KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
			   //			   MO(LN_RP), MO(LN_RN), KC_NO, KC_NO, KC_NO
			   ),
  
  [RP] = LAYOUT_planck_mit(
			   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,\
			   KC_NO, KC_NO, KC_F, KC_NO, KC_NO, KC_NO,	\
			   LGUI_T(KC_0), LALT_T(KC_1), LCTL_T(KC_2), LSFT_T(KC_3), KC_NO, KC_NO, \
			   KC_NO, KC_NO, LSFT_T(KC_G), LCTL_T(KC_C), LALT_T(KC_R), LGUI_T(KC_L), \
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	\
			   KC_NO, KC_NO, KC_NO, MO(RP_LN), MO(RP_LP), KC_NO, \
			   KC_TRNS, MO(RN), KC_NO, KC_NO, KC_NO
			   ),

  [RN] = LAYOUT_planck_mit(
			   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,\
			   KC_NO, KC_NO, KC_B, KC_NO, KC_NO, KC_NO,	\
			   LGUI_T(KC_0), LALT_T(KC_1), LCTL_T(KC_2), LSFT_T(KC_3), KC_NO,KC_NO,\
			   KC_NO, KC_NO,  LSFT_T(KC_M), LCTL_T(KC_W), LALT_T(KC_V), LGUI_T(KC_Z), \
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
			   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	\
			   //KC_NO, KC_NO, KC_NO, MO(RN_LP), MO(RN_LN), KC_NO, 
			   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO,\
			   MO(RP), KC_TRNS, KC_NO, KC_NO, KC_NO
			   ),

  [RP_LP] = LAYOUT_planck_mit(
			      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,\
			      KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, \
			      KC_TRNS, LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_NO, KC_NO,\
			      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
			      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
			      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	\
			      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,\
			      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
			      ),

  [RP_LN] = LAYOUT_planck_mit(
			      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,\
			      KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO,	\
			      KC_TRNS, LALT_T(KC_7), LCTL_T(KC_8), LSFT_T(KC_9), KC_NO, KC_NO, \
			      KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
			      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
			      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	\
			      KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, \
			      KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

// BEGIN: MN combos

const uint16_t PROGMEM C_BACKSPACE[] = {LSFT_T(KC_U), LCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM C_ESCAPE[] = {LSFT_T(KC_U), LGUI_T(KC_A), COMBO_END};

const uint16_t PROGMEM C_SPACE[] = {LSFT_T(KC_H), LCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM C_TAB[] = {LSFT_T(KC_H), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM C_ENTER[] = {LSFT_T(KC_H), LGUI_T(KC_S), COMBO_END};

const uint16_t PROGMEM C_QUOTE[] = {LCTL_T(KC_E), LALT_T(KC_O), COMBO_END};
const uint16_t PROGMEM C_SEMICOLON[] = {LCTL_T(KC_E), LGUI_T(KC_A), COMBO_END};

const uint16_t PROGMEM C_DOT[] = {LCTL_T(KC_T), LALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM C_COMMA[] = {LCTL_T(KC_T), LGUI_T(KC_S), COMBO_END};

combo_t key_combos[] =
  {
    COMBO(C_BACKSPACE, KC_BACKSPACE),
    COMBO(C_ESCAPE, KC_ESCAPE),
    COMBO(C_SPACE, KC_SPACE),
    COMBO(C_TAB, KC_TAB),
    COMBO(C_ENTER, KC_ENTER),
    COMBO(C_QUOTE, KC_QUOTE),
    COMBO(C_SEMICOLON, KC_SEMICOLON),
    COMBO(C_DOT, KC_DOT),
    COMBO(C_COMMA, KC_COMMA),
  };


#define COMBO_SHOULD_TRIGGER

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record)
{
  if(!layer_state_is(BASE))
    {
      return false;
    }
  else
    {
      return true;
    }
}

