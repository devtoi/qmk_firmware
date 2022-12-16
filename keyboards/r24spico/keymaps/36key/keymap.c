#include "keycode.h"
#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H

enum r24spico_layers { _QWERTY, _DVORAK, _SYMBOLS, _NUMBERS_F_KEYS, _MOD, _MOUSE };

enum r24spico_keycodes {
    QWERTY = SAFE_RANGE,
    DVORAK,
};

#define MOD MO(_MOD)
#define SYM MO(_SYMBOLS)
#define NUF MO(_NUMBERS_F_KEYS)
#define MUS MO(_MOUSE)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*	Qwerty
*	┌───────┐																							┌───────┐
*	│		│                                                                                           │		│
*	├───────┼───────┬───────┬───────┬───────┬───────┐			┌───────┬───────┬───────┬───────┬───────┼───────┤
*	│		│	Q	│	W	│	E	│	R	│	T	│			│	Y	│	U	│	I	│	O	│	P	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│	gA	│	aS	│	cD	│	sF	│	G	│			│	H	│	sJ	│	cK	│	aL	│	g;	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│	Z	│	X	│	C	│	V	│	B	│			│	N	│	M	│	,	│	.	│	/	│		│
*	└───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┘
*			│		│Shift	│BSpace	│Esc	│		│			│		│Tab	│Space	│Ent	│		│
*			└───────┴───────┴───────┴───────┴───────┘			└───────┴───────┴───────┴───────┴───────┘
*/
	[_QWERTY] = LAYOUT_r24spico_36key(
// Left hand
		KC_Q,			KC_W,			KC_E,			KC_R,			KC_T,		
		LGUI_T(KC_A),	LALT_T(KC_S),	LCTL_T(KC_D),	LSFT_T(KC_F),	KC_G,		
		KC_Z,			KC_X,			KC_C,			KC_V,			KC_B,		
		XXXXXXX,		OSM(MOD_LSFT), 	LT(SYM, KC_BSPC),LT(NUF,KC_ESC),XXXXXXX,	
// Right hand
		KC_Y, 			KC_U,			KC_I,			KC_O,			KC_P,
		KC_H, 			LSFT_T(KC_J),	RCTL_T(KC_K),	RALT_T(KC_L),	RGUI_T(KC_SCLN),
		KC_N,			KC_M,			KC_COMM,		KC_DOT,			KC_SLSH,
		XXXXXXX,		LT(MUS, KC_TAB),LT(NUF, KC_SPC),LT(MOD, KC_ENT),XXXXXXX
	),

/*	Dvorak
*	┌───────┐																							┌───────┐
*	│		│                                                                                           │		│
*	├───────┼───────┬───────┬───────┬───────┬───────┐			┌───────┬───────┬───────┬───────┬───────┼───────┤
*	│		│   ;	│	,	│	.	│	P	│	Y	│			│	F	│	G	│	C	│	R	│	L	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│ 	gA	│	aO	│	cE	│	sU	│	I	│			│	D	│	sH	│	cT	│	aN	│	gS	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│  	'	│	Q	│	J	│	K	│	X	│			│	B	│	M	│	W	│	V	│	Z	│		│
*	└───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┘
*			│		│Shift	│BSpace	│Esc	│		│			│		│Tab	│Space	│Ent	│		│
*			└───────┴───────┴───────┴───────┴───────┘			└───────┴───────┴───────┴───────┴───────┘

*/
	[_DVORAK] = LAYOUT_r24spico_36key(
// Left hand
		KC_SCLN,		KC_COMM,		KC_DOT,			KC_P,			KC_Y,		
		LGUI_T(KC_A),	LALT_T(KC_O),	LCTL_T(KC_E),	LSFT_T(KC_U),	KC_I,		
		KC_QUOT,		KC_Q,			KC_J,			KC_K,			KC_X,		
		_______,		_______,		_______,		_______,		_______,	
// Right hand
		KC_F, 		KC_G,			KC_C,			KC_R,			KC_L,
		KC_D, 		LSFT_T(KC_H),	RCTL_T(KC_T),	RALT_T(KC_N),	RGUI_T(KC_S),
		KC_B,		KC_M,			KC_W,			KC_V,			KC_Z,
		_______,	_______,		_______,		_______,		_______		
	),
/*	SYM
*	┌───────┐																							┌───────┐
*	│		│                                                                                           │		│
*	├───────┼───────┬───────┬───────┬───────┬───────┐			┌───────┬───────┬───────┬───────┬───────┼───────┤
*	│		│	^	│	<	│	>	│	%	│	?	│			│	&	│	{	│	}	│	@	│	$	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│	!	│	-	│	+	│	=	│	_	│			│	|	│	(	│	)	│	:	│	/	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│	"	│	/	│	*	│	#	│	\	│			│	%	│	[	│	]	│	~	│	`	│		│
*	└───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┘
*			│		│		│		│		│		│			│		│		│		│		│		│
*			└───────┴───────┴───────┴───────┴───────┘			└───────┴───────┴───────┴───────┴───────┘
*/
	[_SYMBOLS] = LAYOUT_r24spico_36key(
// Left hand
		KC_CIRC,	KC_LABK,	KC_RABK,	KC_PERC,	KC_QUES,		
		KC_EXLM,	KC_MINS,	KC_PLUS,	KC_EQL,		KC_UNDS,		
		KC_DQUO,	KC_SLSH,	KC_ASTR,	KC_HASH,	KC_BSLS,
		_______,	_______,	_______,	_______,	_______,	
// Right hand
		KC_AMPR, 	KC_LCBR,	KC_RCBR,	KC_AT,		KC_DLR,	
		KC_PIPE, 	KC_LPRN,	KC_RPRN,	KC_COLN,	KC_SLSH,
		KC_PERC,	KC_LBRC,	KC_RBRC,	KC_TILD,	KC_GRV,	
		_______,	_______,	_______,	_______,	_______
	),
/*	Numbers and F keys
*	┌───────┐																							┌───────┐
*	│		│                                                                                           │		│
*	├───────┼───────┬───────┬───────┬───────┬───────┐			┌───────┬───────┬───────┬───────┬───────┼───────┤
*	│		│	F1	│	F2	│	F3	│	F4	│	F5	│			│	F6	│	F7	│	F8	│	F9	│	F10	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│	g1	│	a2	│	c3	│	4	│	5	│			│	6	│	7	│	c8	│	a9	│	g0	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│	F11	│	F12	│		│		│		│			│		│		│		│		│		│		│
*	└───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┘
*			│		│		│		│		│		│			│		│		│		│		│		│
*			└───────┴───────┴───────┴───────┴───────┘			└───────┴───────┴───────┴───────┴───────┘
*/
	[_NUMBERS_F_KEYS] = LAYOUT_r24spico_36key(
// Left hand
		KC_F1,			KC_F2,			KC_F3,			KC_F4,			KC_F5,		
		LGUI_T(KC_1),	LALT_T(KC_2),	LCTL_T(KC_3),	KC_4,			KC_5,
		KC_F11,			KC_F12,			_______,		_______,		_______,
		_______,		_______,		_______,		_______,		_______,
// Right hand
		KC_F6,			KC_F7,			KC_F8,			KC_F9,			KC_F10,
		KC_6,			KC_7,			RCTL_T(KC_8),	RALT_T(KC_9),	RGUI_T(KC_0),
		_______,		_______,		_______,		_______,		_______,
		_______,		_______,		_______,		_______,		_______
	),
/*	MOD
*	┌───────┐																							┌───────┐
*	│		│                                                                                           │		│
*	├───────┼───────┬───────┬───────┬───────┬───────┐			┌───────┬───────┬───────┬───────┬───────┼───────┤
*	│		│Prev	│Pause	│PrntScr│Next	│ScrLck	│			│Caps	│Paste	│Copy	│Cut	│Undo	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│GUI	│Alt	│Ctrl	│Shift	│Play	│			│Del	│	ᐊ	│	ᐁ	│	ᐃ	│	ᐅ	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│Qwerty	│VolDown│Mute	│VolUp	│Dvorak	│			│Insert	│Home	│Pageᐁ	│Pageᐃ	│End	│		│
*	└───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┘
*			│		│		│		│		│		│			│		│		│		│		│		│
*			└───────┴───────┴───────┴───────┴───────┘			└───────┴───────┴───────┴───────┴───────┘
*/
	[_MOD] = LAYOUT_r24spico_36key(
// Left hand
		KC_MPRV,	KC_PAUS,	KC_PSCR,	KC_MNXT,	KC_SCRL,
		KC_LGUI,	KC_LALT,	KC_LCTL,	KC_LSFT,	KC_MPLY,
		QWERTY,		KC_VOLD,	KC_MUTE,	KC_VOLU,	DVORAK,
		_______,	_______,	_______,	_______,	_______,
// Right hand
		KC_CAPS,	KC_PASTE,	KC_COPY,	KC_CUT,		KC_UNDO,
		KC_DEL,		KC_LEFT,	KC_DOWN,	KC_UP,		KC_RIGHT,
		KC_INS,		KC_HOME,	KC_PGDN,	KC_PGUP,	KC_END,
		_______,	_______,	_______,	_______,	_______
	),
/*	Mouse
*	┌───────┐																							┌───────┐
*	│		│                                                                                           │		│
*	├───────┼───────┬───────┬───────┬───────┬───────┐			┌───────┬───────┬───────┬───────┬───────┼───────┤
*	│		│		│Pause	│PrntScr│ScrLck	│		│			│Undo	│Paste	│Copy	│Cut	│Undo	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│GUI	│Alt	│Ctrl	│Shift	│		│			│LClick	│	←	│	↓	│	↑	│	→	│		│
*	├───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┤
*	│		│		│		│		│		│		│			│RClick	│	⇦	│	⇩	│	⇧	│	⇨	│		│
*	└───────┼───────┼───────┼───────┼───────┼───────┤			├───────┼───────┼───────┼───────┼───────┼───────┘
*			│		│		│		│		│		│			│		│		│		│		│		│
*			└───────┴───────┴───────┴───────┴───────┘			└───────┴───────┴───────┴───────┴───────┘
*/
	[_MOUSE] = LAYOUT_r24spico_36key(
// Left hand
		_______,	KC_PAUS,	KC_PSCR,	KC_SCRL,	_______,
		KC_LGUI,	KC_LALT,	KC_LCTL,	KC_LSFT,	_______,
		_______,	_______,	_______,	_______,	_______,
		_______,	KC_BTN3,	KC_BTN1,	KC_BTN2,	_______,
// Right hand
		KC_UNDO,	KC_PASTE,	KC_COPY,	KC_CUT,		KC_UNDO,
		KC_BTN1,	KC_MS_L,	KC_MS_D,	KC_MS_U,	KC_MS_R,
		KC_BTN2,	KC_WH_L,	KC_WH_D,	KC_WH_U,	KC_WH_R,
		_______,	_______,	_______,	_______,	_______
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
