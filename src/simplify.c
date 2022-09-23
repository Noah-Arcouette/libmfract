#include "mfract.h"
#include <stdio.h>
#include <stdint.h>

fraction16 f16simplify (fraction16 x)
{
	uint8_t a = (uint8_t)(x>>sizeof(fraction16)*4);
	uint8_t b = (uint8_t)x;

	if (a == 1 || b == 1)
	{
		return x;
	}

	if (a == 0 || b == 0)
	{
		return 0;
	}

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}

	return x/a;
}

fraction32 f32simplify (fraction32 x)
{
	uint16_t a = (uint16_t)(x>>sizeof(fraction32)*4);
	uint16_t b = (uint16_t)x;

	if (a == 1 || b == 1)
	{
		return x;
	}

	if (a == 0 || b == 0)
	{
		return 0;
	}

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}

	return x/a;
}

fraction64 f64simplify (fraction64 x)
{
	uint32_t a = (uint32_t)(x>>sizeof(fraction64)*4);
	uint32_t b = (uint32_t)x;

	if (a == 1 || b == 1)
	{
		return x;
	}

	if (a == 0 || b == 0)
	{
		return 0;
	}

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}

	return x/a;
}
