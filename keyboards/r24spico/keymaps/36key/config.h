#pragma once

#define KC_NO XXX

// clang-format off
#define LAYOUT_r24spico_36key( \
        L00, L01, L02, L03, L04, \
        L05, L06, L07, L08, L09, \
        L10, L11, L12, L13, L14, \
		N15, L16, L17, L18, N19, \
        R00, R01, R02, R03, R04, \
        R05, R06, R07, R08, R09, \
        R10, R11, R12, R13, R14, \
		X15, R16, R17, R18, X19 \
    ) \
    { \
        { XXX, L00, L01, L02, L03, L04 }, \
        { XXX, L05, L06, L07, L08, L09 }, \
        { XXX, L10, L11, L12, L13, L14 }, \
        { XXX, XXX, L16, L17, L18, XXX }, \
		{ R00, R01, R02, R03, R04, XXX }, \
		{ R05, R06, R07, R08, R09, XXX }, \
		{ R10, R11, R12, R13, R14, XXX }, \
		{ XXX, R16, R17, R18, XXX, XXX }, \
    }
