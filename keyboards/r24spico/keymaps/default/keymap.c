#include QMK_KEYBOARD_H

enum r24spico_layers {
	_QWERTY,
	_DVORAK,
	_NUMBERS_SYMBOLS,
	_MOD,
	_FUNCTION
};

enum r24spico_keycodes {
	QWERTY = SAFE_RANGE,
	DVORAK,
};

#define MOD MO(_MOD)
#define FUN MO(_FUNCTION)
#define NUM MO(_NUMBERS_SYMBOLS)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT_r24spico_default(
// Left hand
		KC_TAB, 	KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		
		KC_LSHIFT, 	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		
		KC_LCTL,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		
		KC_ESC,		KC_LALT,	KC_LGUI,	KC_SPC,		NUM,		FUN,	
// Right hand
		KC_Y, 		KC_U,		KC_I,		KC_O,		KC_P,		KC_BSLS,
		KC_H, 		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,
		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_MINS,
		KC_ENT,		KC_BSPC,	KC_SPC,		MOD,		KC_RGUI,	KC_EQL
	),

	[_DVORAK] = LAYOUT_r24spico_default(
// Left hand
		_______, 	KC_SCLN,	KC_COMM,	KC_DOT,		KC_P,		KC_Y,		
		_______, 	KC_A,		KC_O,		KC_E,		KC_U,		KC_I,		
		_______,	KC_QUOT,	KC_Q,		KC_J,		KC_K,		KC_X,		
		_______,	_______,	_______,	_______,	_______,	_______,	
// Right hand
		KC_F, 		KC_G,		KC_C,		KC_R,		KC_L,		KC_SLSH,
		KC_D, 		KC_H,		KC_T,		KC_N,		KC_S,		KC_MINS,
		KC_B,		KC_M,		KC_W,		KC_V,		KC_Z,		KC_BSLS,
		_______,	_______,	_______,	_______,	_______,	KC_EQL
	),
	[_NUMBERS_SYMBOLS] = LAYOUT_r24spico_default(
// Left hand
		KC_GRV, 	KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		
		KC_TILD, 	KC_EXLM,	KC_AT,		KC_HASH,	KC_DLR,		KC_PERC,		
		_______,	_______,	_______,	_______,	_______,	_______,		
		_______,	_______,	_______,	_______,	_______,	_______,	
// Right hand
		KC_6, 		KC_7,		KC_8,		KC_9,		KC_0,		KC_BSPC,
		KC_CIRC, 	KC_AMPR,	KC_ASTR,	KC_LPRN,	KC_RPRN,	KC_DEL,
		_______,	_______,	_______,	_______,	_______,	_______,
		_______,	_______,	_______,	_______,	_______,	_______
	),
	[_MOD] = LAYOUT_r24spico_default(
// Left hand
		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		
		_______,	_______,	_______,	_______,	_______,	_______,
		_______,	_______,	_______,	_______,	_______,	_______,
		_______,	_______,	_______,	_______,	_______,	_______,
// Right hand
		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,
		KC_PGUP,	KC_HOME,	KC_UP,		KC_END,		KC_DEL,		KC_PSCR,
		KC_PGDN,	KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_INS,		KC_PAUS,
		_______,	_______,	_______,	_______,	_______,	_______	
	),
	[_FUNCTION] = LAYOUT_r24spico_default(
// Left hand
		QWERTY,		_______,	_______,	_______,	_______,	_______,
		_______,	_______,	_______,	_______,	_______,	_______,		
		_______,	_______,	_______,	_______,	_______,	_______,		
		_______,	_______,	_______,	_______,	_______,	_______,	
// Right hand
		_______,	KC_MPLY,	KC_VOLU,	_______,	_______,	_______,
		_______,	KC_MPRV,	KC_VOLD,	KC_MNXT,	_______,	_______,
		_______,	_______,	KC_MUTE,	_______,	_______,	_______,
		_______,	_______,	_______,	_______,	_______,	DVORAK
	),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
  }
  return true;
}
