#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_r24spico_default(
// Left hand
		KC_TAB, 	KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		
		KC_LSHIFT, 	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		
		KC_LCTL,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		
		KC_ESC,		KC_LALT,	KC_LGUI,	KC_SPC,		KC_BSPC,	KC_ENT,	
// Right hand
		KC_Y, 		KC_U,		KC_I,		KC_O,		KC_P,		KC_LBRC,
		KC_H, 		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,
		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_BSLS,
		KC_ENT,		KC_BSPC,	KC_SPC,		KC_RCTL,	KC_RGUI,	KC_BSPC
	)
};
