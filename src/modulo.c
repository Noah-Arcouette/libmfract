#include "libdante.h"
#include <stdint.h>
#include <stdio.h>

fraction32 f32mod (fraction32 x, fraction32 y)
{
	const uint16_t xa = (uint16_t)(x>>sizeof(fraction32)*4);
	const uint16_t xb = (uint16_t)x;

	const uint16_t ya = (uint16_t)(y>>sizeof(fraction32)*4);
	const uint16_t yb = (uint16_t)y;

	return Fraction((xa * yb) % (ya * xb), xb * yb, fraction32);
}

fraction16 f16mod (fraction16 x, fraction16 y)
{
	const uint8_t xa = (uint8_t)(x>>sizeof(fraction16)*4);
	const uint8_t xb = (uint8_t)x;

	const uint8_t ya = (uint8_t)(y>>sizeof(fraction16)*4);
	const uint8_t yb = (uint8_t)y;

	return Fraction((xa * yb) % (ya * xb), xb * yb, fraction16);
}

fraction64 f64mod (fraction64 x, fraction64 y)
{
	const uint32_t xa = (uint32_t)(x>>sizeof(fraction64)*4);
	const uint32_t xb = (uint32_t)x;

	const uint32_t ya = (uint32_t)(y>>sizeof(fraction64)*4);
	const uint32_t yb = (uint32_t)y;

	return Fraction((xa * yb) % (ya * xb), xb * yb, fraction64);
}

