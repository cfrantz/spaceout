#pragma data-name(push, "CHARS")
#include "binary.h"
#define B(x) binconst(x)
unsigned char charset[128 * 16] = {
	// Each character is 2 * 8bytes, as two 8x8 bitplanes.
	//
	// 0x20, Space
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x21, bang !
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00000000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x22, double-quote "
	B(00101000),
	B(00101000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x23, hash #
	B(00101000),
	B(00101000),
	B(01111100),
	B(00101000),
	B(01111100),
	B(00101000),
	B(00101000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x24, dollar-sign $
	B(00010000),
	B(00111000),
	B(01010000),
	B(00111000),
	B(00010100),
	B(00111000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x25, percent %
	B(01000100),
	B(00000100),
	B(00001000),
	B(00010000),
	B(00100000),
	B(01000000),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x26, Ampersand &
	B(00100000),
	B(01010000),
	B(01010000),
	B(00100000),
	B(01010100),
	B(01001000),
	B(00110100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x27, Quote '
	B(00010000),
	B(00010000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x28, open-paren
	B(00010000),
	B(00100000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(00100000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x29, close-paren
	B(00010000),
	B(00001000),
	B(00000100),
	B(00000100),
	B(00000100),
	B(00001000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x2a, star *
	B(00000000),
	B(00010000),
	B(01010100),
	B(00111000),
	B(00101000),
	B(01000100),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x2b, plus +
	B(00000000),
	B(00010000),
	B(00010000),
	B(01111100),
	B(00010000),
	B(00010000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x2c, comma ,
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00001000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x2d, dash -
	B(00000000),
	B(00000000),
	B(00000000),
	B(01111100),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x2e, period .
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00011000),
	B(00011000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x2f, slash /
	B(00000100),
	B(00000100),
	B(00001000),
	B(00010000),
	B(00100000),
	B(01000000),
	B(01000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x30, zero 0
	B(00111000),
	B(01000100),
	B(01001100),
	B(01010100),
	B(01100100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x31, one 1
	B(00010000),
	B(00110000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x32, two 2
	B(00111000),
	B(01000100),
	B(00000100),
	B(00111000),
	B(01000000),
	B(01000000),
	B(01111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x33, three 3
	B(00111000),
	B(01000100),
	B(00000100),
	B(00011000),
	B(00000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x34, four 4
	B(00001000),
	B(00011000),
	B(00101000),
	B(01001000),
	B(01111100),
	B(00001000),
	B(00001000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x35, five 5
	B(01111100),
	B(01000000),
	B(01111000),
	B(00000100),
	B(00000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x36, six 6
	B(00111000),
	B(01000100),
	B(01000000),
	B(01011000),
	B(01100100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x37, seven 7
	B(01111100),
	B(00000100),
	B(00001000),
	B(00001000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x38, eight 8
	B(00111000),
	B(01000100),
	B(01000100),
	B(00111000),
	B(01000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x39, nine 9
	B(00111000),
	B(01000100),
	B(01000100),
	B(00111100),
	B(00000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x3a, colon :
	B(00000000),
	B(00011000),
	B(00011000),
	B(00000000),
	B(00000000),
	B(00011000),
	B(00011000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x3b, semi-colon ;
	B(00000000),
	B(00011000),
	B(00011000),
	B(00000000),
	B(00000000),
	B(00001000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x3c, less-than <
	B(00001000),
	B(00010000),
	B(00100000),
	B(01000000),
	B(00100000),
	B(00010000),
	B(00001000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x3d, equal =
	B(00000000),
	B(00000000),
	B(01111100),
	B(00000000),
	B(01111100),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x3e, greater-than
	B(00100000),
	B(00010000),
	B(00001000),
	B(00000100),
	B(00001000),
	B(00010000),
	B(00100000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x3f, question ?
	B(00111000),
	B(01000100),
	B(00000100),
	B(00011000),
	B(00010000),
	B(00000000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x40, at-sign @
	B(00111000),
	B(01000100),
	B(01010100),
	B(01010100),
	B(01001000),
	B(01000000),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x41, A
	B(00010000),
	B(00101000),
	B(01000100),
	B(01000100),
	B(01111100),
	B(01000100),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x42, B
	B(01111000),
	B(01000100),
	B(01000100),
	B(01111000),
	B(01000100),
	B(01000100),
	B(01111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x43, C
	B(00111000),
	B(01000100),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x44, D
	B(01111000),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x45, E
	B(01111100),
	B(01000000),
	B(01000000),
	B(01110000),
	B(01000000),
	B(01000000),
	B(01111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x46, F
	B(01111100),
	B(01000000),
	B(01000000),
	B(01110000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x47, G
	B(00111000),
	B(01000100),
	B(01000000),
	B(01011100),
	B(01000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x48, H
	B(01000100),
	B(01000100),
	B(01000100),
	B(01111100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x49, I
	B(01111100),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(01111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x4a, J
	B(01111100),
	B(00000100),
	B(00000100),
	B(00000100),
	B(00000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x4b, K
	B(01000100),
	B(01001000),
	B(01010000),
	B(01100000),
	B(01010000),
	B(01001000),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x4c, L
	B(01000000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x4d, M
	B(01000100),
	B(01101100),
	B(01010100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x4e, N
	B(01000100),
	B(01000100),
	B(01100100),
	B(01010100),
	B(01001100),
	B(01000100),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x4f, O
	B(00111000),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x50, P
	B(01111000),
	B(01000100),
	B(01000100),
	B(01111000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x51, Q
	B(00111000),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01010100),
	B(01001000),
	B(00110100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x52, R
	B(01111000),
	B(01000100),
	B(01000100),
	B(01111000),
	B(01010000),
	B(01001000),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x53, S
	B(00111000),
	B(01000100),
	B(01000000),
	B(00111000),
	B(00000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x54, T
	B(01111100),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x55, U
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x56, V
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00101000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x57, W
	B(01000100),
	B(01000100),
	B(01000100),
	B(01000100),
	B(01010100),
	B(01010100),
	B(00101000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x58, X
	B(01000100),
	B(01000100),
	B(00101000),
	B(00010000),
	B(00101000),
	B(01000100),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x59, Y
	B(01000100),
	B(01000100),
	B(00101000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x5a, Z
	B(01111100),
	B(00000100),
	B(00001000),
	B(00010000),
	B(00100000),
	B(01000000),
	B(01111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 05b, [
	B(01111000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(01111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x5c, backlslash "\"
	B(01000000),
	B(01000000),
	B(00100000),
	B(00010000),
	B(00001000),
	B(00000100),
	B(00000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x5d, ]
	B(00111100),
	B(00000100),
	B(00000100),
	B(00000100),
	B(00000100),
	B(00000100),
	B(00111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x5e, ^
	B(00010000),
	B(00101000),
	B(01000100),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x5f, _
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(11111111),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x60, backtick `
	B(00100000),
	B(00010000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x61, a
	B(00000000),
	B(00000000),
	B(00110100),
	B(01001000),
	B(01001000),
	B(01001000),
	B(00110100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x62, b
	B(01100000),
	B(00100000),
	B(00111000),
	B(00100100),
	B(00100100),
	B(00100100),
	B(01011000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x63, c
	B(00000000),
	B(00000000),
	B(00111000),
	B(01000000),
	B(01000000),
	B(01000000),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x64, d
	B(00001100),
	B(00001000),
	B(00111000),
	B(01001000),
	B(01001000),
	B(01001000),
	B(00110100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x65, e
	B(00000000),
	B(00000000),
	B(00111000),
	B(01000100),
	B(01111000),
	B(01000000),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x66, f
	B(00011000),
	B(00100100),
	B(00100000),
	B(01111000),
	B(00100000),
	B(00100000),
	B(01100000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x67, g
	B(00000000),
	B(00000000),
	B(00110100),
	B(01001000),
	B(01001000),
	B(00111000),
	B(00001000),
	B(00110000),
	0,0,0,0,0,0,0,0,

	// 0x68, h
	B(01100000),
	B(00100000),
	B(00111000),
	B(00100100),
	B(00100100),
	B(00100100),
	B(00100100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x69, i
	B(00010000),
	B(00000000),
	B(00110000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x6a, j
	B(00000100),
	B(00000000),
	B(00001100),
	B(00000100),
	B(00000100),
	B(00000100),
	B(00100100),
	B(00011000),
	0,0,0,0,0,0,0,0,

	// 0x6b, k
	B(01100000),
	B(00100000),
	B(00100100),
	B(00101000),
	B(00110000),
	B(00101000),
	B(01100100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x6c, l
	B(00110000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x6d, m
	B(00000000),
	B(00000000),
	B(01101000),
	B(01010100),
	B(01010100),
	B(01010100),
	B(01010100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x6e, n
	B(00000000),
	B(00000000),
	B(01011000),
	B(00100100),
	B(00100100),
	B(00100100),
	B(01100100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x6f, o
	B(00000000),
	B(00000000),
	B(00111000),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x70, p
	B(00000000),
	B(00000000),
	B(01011000),
	B(00100100),
	B(00100100),
	B(00111000),
	B(00100000),
	B(01100000),
	0,0,0,0,0,0,0,0,

	// 0x71, q
	B(00000000),
	B(00000000),
	B(00110100),
	B(01001000),
	B(01001000),
	B(00111000),
	B(00001000),
	B(00001100),
	0,0,0,0,0,0,0,0,

	// 0x72, r
	B(00000000),
	B(00000000),
	B(01011000),
	B(00100100),
	B(00100000),
	B(00100000),
	B(01100000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x73, s
	B(00000000),
	B(00000000),
	B(00111000),
	B(01000000),
	B(00111000),
	B(00000100),
	B(00111000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x74, t
	B(00000000),
	B(00010000),
	B(00111000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00011000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x75, u
	B(00000000),
	B(00000000),
	B(01001100),
	B(01001000),
	B(01001000),
	B(01001000),
	B(00110100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x76, v
	B(00000000),
	B(00000000),
	B(01000100),
	B(01000100),
	B(01000100),
	B(00101000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x77, w
	B(00000000),
	B(00000000),
	B(01000100),
	B(01010100),
	B(01010100),
	B(01010100),
	B(00101000),
	B(00000000),
	0,0,0,0,0,0,0,0,


	// 0x78, x
	B(00000000),
	B(00000000),
	B(01000100),
	B(00101000),
	B(00010000),
	B(00101000),
	B(01000100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x79, y
	B(00000000),
	B(00000000),
	B(01000100),
	B(01000100),
	B(00101000),
	B(00010000),
	B(00100000),
	B(01000000),
	0,0,0,0,0,0,0,0,

	// 0x7a, z
	B(00000000),
	B(00000000),
	B(01111100),
	B(00001000),
	B(00010000),
	B(00100000),
	B(01111100),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x7b, {
	B(00010000),
	B(00100000),
	B(00100000),
	B(01000000),
	B(00100000),
	B(00100000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x7c, |
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x7d, }
	B(00010000),
	B(00001000),
	B(00001000),
	B(00000100),
	B(00001000),
	B(00001000),
	B(00010000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x7e, ~
	B(00000000),
	B(00000000),
	B(00100000),
	B(01010100),
	B(00001000),
	B(00000000),
	B(00000000),
	B(00000000),
	0,0,0,0,0,0,0,0,

	// 0x7f, DEL
	0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
	0,0,0,0,0,0,0,0,
};

#pragma data-name(pop)
