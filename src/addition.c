#include "libdante.h"
#include <stdint.h>
#include <stdio.h>

fraction32 f32add (fraction32 x, fraction32 y)
{
	uint16_t xa = (uint16_t)(x>>sizeof(fraction32)*4);
	uint16_t xb = (uint16_t)x;

	uint16_t ya = (uint16_t)(y>>sizeof(fraction32)*4);
	uint16_t yb = (uint16_t)y;

	xa  = (xa * yb) + (ya * xb);
	xb *= yb;

	return Fraction(xa, xb, fraction32);
}

fraction16 f16add (fraction16 x, fraction16 y)
{
	uint8_t xa = (uint8_t)(x>>sizeof(fraction16)*4);
	uint8_t xb = (uint8_t)x;

	uint8_t ya = (uint8_t)(y>>sizeof(fraction16)*4);
	uint8_t yb = (uint8_t)y;

	xa  = (xa * yb) + (ya * xb);
	xb *= yb;

	return Fraction(xa, xb, fraction16);
}

fraction64 f64add (fraction64 x, fraction64 y)
{
	uint32_t xa = (uint32_t)(x>>sizeof(fraction64)*4);
	uint32_t xb = (uint32_t)x;

	uint32_t ya = (uint32_t)(y>>sizeof(fraction64)*4);
	uint32_t yb = (uint32_t)y;

	xa  = (xa * yb) + (ya * xb);
	xb *= yb;

	return Fraction(xa, xb, fraction64);
}

