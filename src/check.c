#include "libdante.h"
#include <stdint.h>
#include <stdio.h>

int f32chk (fraction32 a, fraction32 b)
{
	uint16_t       a1 = (uint16_t)(a>>sizeof(fraction32)*4);
	const uint16_t b1 = (uint16_t)a;

	uint16_t       a2 = (uint16_t)(b>>sizeof(fraction32)*4);
	const uint16_t b2 = (uint16_t)b;

	if (b1 == 0 || b2 == 0)
	{
		return 1;
	}

	a1 *= b2;
	a2 *= b1;

	return a1 == a2;
}

int f16chk (fraction16 a, fraction16 b)
{
	uint8_t       a1 = (uint8_t)(a>>sizeof(fraction16)*4);
	const uint8_t b1 = (uint8_t)a;

	uint8_t       a2 = (uint8_t)(b>>sizeof(fraction16)*4);
	const uint8_t b2 = (uint8_t)b;

	if (b1 == 0 || b2 == 0)
	{
		return 1;
	}

	a1 *= b2;
	a2 *= b1;

	return a1 == a2;
}

int f64chk (fraction64 a, fraction64 b)
{
	uint32_t       a1 = (uint32_t)(a>>sizeof(fraction64)*4);
	const uint32_t b1 = (uint32_t)a;

	uint32_t       a2 = (uint32_t)(b>>sizeof(fraction64)*4);
	const uint32_t b2 = (uint32_t)b;

	if (b1 == 0 || b2 == 0)
	{
		return 1;
	}

	a1 *= b2;
	a2 *= b1;

	return a1 == a2;
}
