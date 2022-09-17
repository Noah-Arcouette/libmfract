#include "libdante.h"
#include <stdint.h>
#include <stdio.h>

fraction32 f32apr (float x, unsigned int precision)
{
	uint16_t a1 = 0;
	uint16_t b1 = 1;

	uint16_t a2 = 1;
	uint16_t b2 = 1;

	float ax = 0;
	float bx = 0;

	const uint16_t top = (uint16_t)x;
	x -= top;

	for (; precision; precision--)
	{
		ax = a1 + a2;
		bx = b1 + b2;

		if ((ax/bx) < x)
		{
			a1 = ax;
			b1 = bx;

			continue;
		}

		if ((ax/bx) == x || (top * (uint16_t)bx) > UINT16_MAX)
		{
			break;
		}

		a2 = ax;
		b2 = bx;
	}

	return Fraction(
		((uint16_t)ax + (top * (uint16_t)bx)), 
		(uint16_t)bx, 
		fraction32
	);
}

fraction16 f16apr (float x, unsigned int precision)
{
	uint8_t a1 = 0;
	uint8_t b1 = 1;

	uint8_t a2 = 1;
	uint8_t b2 = 1;

	float ax = 0;
	float bx = 0;

	const uint8_t top = (uint8_t)x;
	x -= top;

	for (; precision; precision--)
	{
		ax = a1 + a2;
		bx = b1 + b2;

		if ((ax/bx) < x)
		{
			a1 = ax;
			b1 = bx;

			continue;
		}

		if ((ax/bx) == x || (top * (uint8_t)bx) > UINT8_MAX)
		{
			break;
		}

		a2 = ax;
		b2 = bx;
	}

	return Fraction(
		((uint8_t)ax + (top * (uint8_t)bx)), 
		(uint8_t)bx, 
		fraction16
	);
}

fraction64 f64apr (double x, unsigned int precision)
{
	uint32_t a1 = 0;
	uint32_t b1 = 1;

	uint32_t a2 = 1;
	uint32_t b2 = 1;

	float ax = 0;
	float bx = 0;

	const uint32_t top = (uint32_t)x;
	x -= top;

	for (; precision; precision--)
	{
		ax = a1 + a2;
		bx = b1 + b2;

		if ((ax/bx) < x)
		{
			a1 = ax;
			b1 = bx;

			continue;
		}

		if ((ax/bx) == x || (top * (uint32_t)bx) > UINT32_MAX)
		{
			break;
		}

		a2 = ax;
		b2 = bx;
	}

	return Fraction(
		((uint32_t)ax + (top * (uint32_t)bx)), 
		(uint32_t)bx, 
		fraction64
	);
}

