#pragma data-name(push, "CHARS")
unsigned char charset[128 * 16] = {
	// Each character is 2 * 8bytes, as two 8x8 bitplanes.
	//
	// 0x20, Space
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x21, bang !
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00000000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x22, double-quote "
	0b00101000,
	0b00101000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x23, hash #
	0b00101000,
	0b00101000,
	0b01111100,
	0b00101000,
	0b01111100,
	0b00101000,
	0b00101000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x24, dollar-sign $
	0b00010000,
	0b00111000,
	0b01010000,
	0b00111000,
	0b00010100,
	0b00111000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x25, percent %
	0b01000100,
	0b00000100,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x26, Ampersand &
	0b00100000,
	0b01010000,
	0b01010000,
	0b00100000,
	0b01010100,
	0b01001000,
	0b00110100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x27, Quote '
	0b00010000,
	0b00010000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x28, open-paren
	0b00010000,
	0b00100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00100000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x29, close-paren
	0b00010000,
	0b00001000,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00001000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x2a, star *
	0b00000000,
	0b00010000,
	0b01010100,
	0b00111000,
	0b00101000,
	0b01000100,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x2b, plus +
	0b00000000,
	0b00010000,
	0b00010000,
	0b01111100,
	0b00010000,
	0b00010000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x2c, comma ,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00001000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x2d, dash -
	0b00000000,
	0b00000000,
	0b00000000,
	0b01111100,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x2e, period .
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00011000,
	0b00011000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x2f, slash /
	0b00000100,
	0b00000100,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b01000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x30, zero 0
	0b00111000,
	0b01000100,
	0b01001100,
	0b01010100,
	0b01100100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x31, one 1
	0b00010000,
	0b00110000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x32, two 2
	0b00111000,
	0b01000100,
	0b00000100,
	0b00111000,
	0b01000000,
	0b01000000,
	0b01111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x33, three 3
	0b00111000,
	0b01000100,
	0b00000100,
	0b00011000,
	0b00000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x34, four 4
	0b00001000,
	0b00011000,
	0b00101000,
	0b01001000,
	0b01111100,
	0b00001000,
	0b00001000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x35, five 5
	0b01111100,
	0b01000000,
	0b01111000,
	0b00000100,
	0b00000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x36, six 6
	0b00111000,
	0b01000100,
	0b01000000,
	0b01011000,
	0b01100100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x37, seven 7
	0b01111100,
	0b00000100,
	0b00001000,
	0b00001000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x38, eight 8
	0b00111000,
	0b01000100,
	0b01000100,
	0b00111000,
	0b01000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x39, nine 9
	0b00111000,
	0b01000100,
	0b01000100,
	0b00111100,
	0b00000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x3a, colon :
	0b00000000,
	0b00011000,
	0b00011000,
	0b00000000,
	0b00000000,
	0b00011000,
	0b00011000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x3b, semi-colon ;
	0b00000000,
	0b00011000,
	0b00011000,
	0b00000000,
	0b00000000,
	0b00001000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x3c, less-than <
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b00100000,
	0b00010000,
	0b00001000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x3d, equal =
	0b00000000,
	0b00000000,
	0b01111100,
	0b00000000,
	0b01111100,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x3e, greater-than
	0b00100000,
	0b00010000,
	0b00001000,
	0b00000100,
	0b00001000,
	0b00010000,
	0b00100000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x3f, question ?
	0b00111000,
	0b01000100,
	0b00000100,
	0b00011000,
	0b00010000,
	0b00000000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x40, at-sign @
	0b00111000,
	0b01000100,
	0b01010100,
	0b01010100,
	0b01001000,
	0b01000000,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x41, A
	0b00010000,
	0b00101000,
	0b01000100,
	0b01000100,
	0b01111100,
	0b01000100,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x42, B
	0b01111000,
	0b01000100,
	0b01000100,
	0b01111000,
	0b01000100,
	0b01000100,
	0b01111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x43, C
	0b00111000,
	0b01000100,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x44, D
	0b01111000,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x45, E
	0b01111100,
	0b01000000,
	0b01000000,
	0b01110000,
	0b01000000,
	0b01000000,
	0b01111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x46, F
	0b01111100,
	0b01000000,
	0b01000000,
	0b01110000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x47, G
	0b00111000,
	0b01000100,
	0b01000000,
	0b01011100,
	0b01000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x48, H
	0b01000100,
	0b01000100,
	0b01000100,
	0b01111100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x49, I
	0b01111100,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b01111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x4a, J
	0b01111100,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x4b, K
	0b01000100,
	0b01001000,
	0b01010000,
	0b01100000,
	0b01010000,
	0b01001000,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x4c, L
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x4d, M
	0b01000100,
	0b01101100,
	0b01010100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x4e, N
	0b01000100,
	0b01000100,
	0b01100100,
	0b01010100,
	0b01001100,
	0b01000100,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x4f, O
	0b00111000,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x50, P
	0b01111000,
	0b01000100,
	0b01000100,
	0b01111000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x51, Q
	0b00111000,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01010100,
	0b01001000,
	0b00110100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x52, R
	0b01111000,
	0b01000100,
	0b01000100,
	0b01111000,
	0b01010000,
	0b01001000,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x53, S
	0b00111000,
	0b01000100,
	0b01000000,
	0b00111000,
	0b00000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x54, T
	0b01111100,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x55, U
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x56, V
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00101000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x57, W
	0b01000100,
	0b01000100,
	0b01000100,
	0b01000100,
	0b01010100,
	0b01010100,
	0b00101000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x58, X
	0b01000100,
	0b01000100,
	0b00101000,
	0b00010000,
	0b00101000,
	0b01000100,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x59, Y
	0b01000100,
	0b01000100,
	0b00101000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x5a, Z
	0b01111100,
	0b00000100,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b01111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 05b, [
	0b01111000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x5c, backlslash "\"
	0b01000000,
	0b01000000,
	0b00100000,
	0b00010000,
	0b00001000,
	0b00000100,
	0b00000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x5d, ]
	0b00111100,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x5e, ^
	0b00010000,
	0b00101000,
	0b01000100,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x5f, _
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b11111111,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x60, backtick `
	0b00100000,
	0b00010000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x61, a
	0b00000000,
	0b00000000,
	0b00110100,
	0b01001000,
	0b01001000,
	0b01001000,
	0b00110100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x62, b
	0b01100000,
	0b00100000,
	0b00111000,
	0b00100100,
	0b00100100,
	0b00100100,
	0b01011000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x63, c
	0b00000000,
	0b00000000,
	0b00111000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x64, d
	0b00001100,
	0b00001000,
	0b00111000,
	0b01001000,
	0b01001000,
	0b01001000,
	0b00110100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x65, e
	0b00000000,
	0b00000000,
	0b00111000,
	0b01000100,
	0b01111000,
	0b01000000,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x66, f
	0b00011000,
	0b00100100,
	0b00100000,
	0b01111000,
	0b00100000,
	0b00100000,
	0b01100000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x67, g
	0b00000000,
	0b00000000,
	0b00110100,
	0b01001000,
	0b01001000,
	0b00111000,
	0b00001000,
	0b00110000,
	0,0,0,0,0,0,0,0,

	// 0x68, h
	0b01100000,
	0b00100000,
	0b00111000,
	0b00100100,
	0b00100100,
	0b00100100,
	0b00100100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x69, i
	0b00010000,
	0b00000000,
	0b00110000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x6a, j
	0b00000100,
	0b00000000,
	0b00001100,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00100100,
	0b00011000,
	0,0,0,0,0,0,0,0,

	// 0x6b, k
	0b01100000,
	0b00100000,
	0b00100100,
	0b00101000,
	0b00110000,
	0b00101000,
	0b01100100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x6c, l
	0b00110000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x6d, m
	0b00000000,
	0b00000000,
	0b01101000,
	0b01010100,
	0b01010100,
	0b01010100,
	0b01010100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x6e, n
	0b00000000,
	0b00000000,
	0b01011000,
	0b00100100,
	0b00100100,
	0b00100100,
	0b01100100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x6f, o
	0b00000000,
	0b00000000,
	0b00111000,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x70, p
	0b00000000,
	0b00000000,
	0b01011000,
	0b00100100,
	0b00100100,
	0b00111000,
	0b00100000,
	0b01100000,
	0,0,0,0,0,0,0,0,

	// 0x71, q
	0b00000000,
	0b00000000,
	0b00110100,
	0b01001000,
	0b01001000,
	0b00111000,
	0b00001000,
	0b00001100,
	0,0,0,0,0,0,0,0,

	// 0x72, r
	0b00000000,
	0b00000000,
	0b01011000,
	0b00100100,
	0b00100000,
	0b00100000,
	0b01100000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x73, s
	0b00000000,
	0b00000000,
	0b00111000,
	0b01000000,
	0b00111000,
	0b00000100,
	0b00111000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x74, t
	0b00000000,
	0b00010000,
	0b00111000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00011000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x75, u
	0b00000000,
	0b00000000,
	0b01001100,
	0b01001000,
	0b01001000,
	0b01001000,
	0b00110100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x76, v
	0b00000000,
	0b00000000,
	0b01000100,
	0b01000100,
	0b01000100,
	0b00101000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x77, w
	0b00000000,
	0b00000000,
	0b01000100,
	0b01010100,
	0b01010100,
	0b01010100,
	0b00101000,
	0b00000000,
	0,0,0,0,0,0,0,0,


	// 0x78, x
	0b00000000,
	0b00000000,
	0b01000100,
	0b00101000,
	0b00010000,
	0b00101000,
	0b01000100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x79, y
	0b00000000,
	0b00000000,
	0b01000100,
	0b01000100,
	0b00101000,
	0b00010000,
	0b00100000,
	0b01000000,
	0,0,0,0,0,0,0,0,

	// 0x7a, z
	0b00000000,
	0b00000000,
	0b01111100,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01111100,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x7b, {
	0b00010000,
	0b00100000,
	0b00100000,
	0b01000000,
	0b00100000,
	0b00100000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x7c, |
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x7d, }
	0b00010000,
	0b00001000,
	0b00001000,
	0b00000100,
	0b00001000,
	0b00001000,
	0b00010000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x7e, ~
	0b00000000,
	0b00000000,
	0b00100000,
	0b01010100,
	0b00001000,
	0b00000000,
	0b00000000,
	0b00000000,
	0,0,0,0,0,0,0,0,

	// 0x7f, DEL
	0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
	0,0,0,0,0,0,0,0,
};

#pragma data-name(pop)
