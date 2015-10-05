#ifndef BINARY_H
#define BINARY_H
//////////////////////////////////////////////////////////////////////
// Macros for expressing a constant as binary
//////////////////////////////////////////////////////////////////////

#define _ashex(n) (0x ## n ## UL)
#define _movebit(from, to, n) ((n>>(from-to)) & (1<<to))

#define _binconst(n) (\
		_movebit(0, 0, n) | \
		_movebit(4, 1, n) | \
		_movebit(8, 2, n) | \
		_movebit(12, 3, n) | \
		_movebit(16, 4, n) | \
		_movebit(20, 5, n) | \
		_movebit(24, 6, n) | \
		_movebit(28, 7, n) )

#define binconst(n) _binconst(_ashex(n))
#endif
