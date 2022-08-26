/*
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

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6465
#define DEVICE_VER 0x0001
#define PRODUCT r24spico
#define MANUFACTURER devtoi

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 500
#define PERMISSIVE_HOLD

#define SERIAL_USART_TX_PIN GP1
#define SERIAL_PIO_USE_PIO1

/* Top
 * { GP8, GP7, GP5, GP4, GP3, GP2 }  \
 * Home
 * { GP14, GP13, GP12, GP11, GP10, GP9 }  \
 * Buttom
 * { GP20, GP19, GP18, GP17, GP16, GP15 }  \
 * Corner, thumb
 * { GP6, GP28, GP27, GP26, GP22, GP21 }  \
 */

#define IS_COMMAND() (get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT) | MOD_BIT(KC_LSFT)))

// clang-format off
#define DIRECT_PINS { \
    { GP8, GP7, GP5, GP4, GP3, GP2 },  \
    { GP14, GP13, GP12, GP11, GP10, GP9 },  \
    { GP20, GP19, GP18, GP17, GP16, GP15 },  \
    { GP6, GP21, GP22, GP26, GP27, GP28 }  \
}

// clang-format off
#define DIRECT_PINS_RIGHT { \
    { GP2, GP3, GP4, GP5, GP7, GP8 },  \
    { GP9, GP10, GP11, GP12, GP13, GP14 },  \
    { GP15, GP16, GP17, GP18, GP19, GP20 },  \
    { GP28, GP27, GP26, GP22, GP21, GP6 }  \
}

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

