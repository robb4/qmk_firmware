/* Copyright 2019 Robert Dumitrescu
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

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

 #define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6,           RA6, RA5, RA4, RA3, RA2, RA1, \
    LB1, LB2, LB3, LB4, LB5, LB6,           RB6, RB5, RB4, RB3, RB2, RB1, \
    LC1, LC2, LC3, LC4, LC5, LC6,           RC6, RC5, RC4, RC3, RC2, RC1, \
    LD1, LD2, LD3, LD4, LD5, LD6,           RD6, RD5, RD4, RD3, RD2, RD1, \
                        LE4, LE5, LE6, RE6, RE5, RE4 \
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6 }, \
        { LB1, LB2, LB3, LB4, LB5, LB6 }, \
        { LC1, LC2, LC3, LC4, LC5, LC6 }, \
        { LD1, LD2, LD3, LD4, LD5, LD6 }, \
        { KC_NO, KC_NO, KC_NO, LE4, LE5, LE6 }, \
        { RA1, RA2, RA3, RA4, RA5, RA6 }, \
        { RB1, RB2, RB3, RB4, RB5, RB6 }, \
        { RC1, RC2, RC3, RC4, RC5, RC6 }, \
        { RD1, RD2, RD3, RD4, RD5, RD6 }, \
        { KC_NO, KC_NO, KC_NO, RE4, RE5, RE6 } \
    }
/*#define LAYOUT_kc( \
    L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35,           R30, R31, R32, R33, R34, R35, \
                        LT1, LT2, LT3, RT3, RT2, RT1 \
    ) \
    LAYOUT( \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05,                     KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15,                     KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25,                     KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, \
        KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35,                     KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35, \
                                                KC_##LT1, KC_##LT2, KC_##LT3, KC_##RT3, KC_##RT2, KC_##RT1 \
    )
*/