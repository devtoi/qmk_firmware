/* Copyright 2019
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

#pragma once

#include "quantum.h"

// clang-format off
#define LAYOUT_r24spico_default( \
        L02, L03, L04, L05, L06, L07, \
        L08, L09, L10, L11, L12, L13, \
        L14, L15, L16, L17, L18, L19, \
		L01, L20, L21, L22, L23, L24, \
		R07, R06, R05, R04, R03, R02, \
		R13, R12, R11, R10, R09, R08, \
		R19, R18, R17, R16, R15, R14, \
		R24, R23, R22, R21, R20, R01 \
    ) \
    { \
        { L02, L03, L04, L05, L06, L07 }, \
        { L08, L09, L10, L11, L12, L13 }, \
        { L14, L15, L16, L17, L18, L19 }, \
        { L01, L20, L21, L22, L23, L24 }, \
		{ R07, R06, R05, R04, R03, R02 }, \
		{ R13, R12, R11, R10, R09, R08 }, \
		{ R19, R18, R17, R16, R15, R14 }, \
		{ R24, R23, R22, R21, R20, R01 }, \
    }

#define LAYOUT LAYOUT_r24spico_default
