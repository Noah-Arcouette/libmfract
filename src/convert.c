#include "mfract.h"
#include <stdint.h>
#include <stdio.h>

fraction32 f32apr (float x, unsigned int precision)
{
	unsigned int Aprev[2] = {1, 0};
	unsigned int Bprev[2] = {0, 1};

	unsigned int n;
	unsigned int A = 0;
	unsigned int B = 0;

	for (unsigned int i=0; i<precision; ++i) 
	{
		n  = (int)x;
		x -= n;
		x  = 1/x;

		A = Aprev[0] + n * Aprev[1];
		Aprev[0] = Aprev[1];
		Aprev[1] = A;

		B = Bprev[0] + n * Bprev[1];
		Bprev[0] = Bprev[1];
		Bprev[1] = B;

		if (((float)B / (float)A) == x)
		{
			break;
		}
	}

	return Fraction(
		B,
		A,
		fraction32
	);
}

fraction16 f16apr (float x, unsigned int precision)
{
	unsigned int Aprev[2] = {1, 0};
	unsigned int Bprev[2] = {0, 1};

	unsigned int n;
	unsigned int A = 0;
	unsigned int B = 0;

	for (unsigned int i=0; i<precision; ++i) 
	{
		n  = (int)x;
		x -= n;
		x  = 1/x;

		A = Aprev[0] + n * Aprev[1];
		Aprev[0] = Aprev[1];
		Aprev[1] = A;

		B = Bprev[0] + n * Bprev[1];
		Bprev[0] = Bprev[1];
		Bprev[1] = B;

		if (((float)B / (float)A) == x)
		{
			break;
		}
	}

	return Fraction(
		B,
		A,
		fraction16
	);
}

fraction64 f64apr (double x, unsigned int precision)
{
	unsigned int Aprev[2] = {1, 0};
	unsigned int Bprev[2] = {0, 1};

	unsigned int n;
	unsigned int A = 0;
	unsigned int B = 0;

	for (unsigned int i=0; i<precision; ++i) 
	{
		n  = (int)x;
		x -= n;
		x  = 1/x;

		A = Aprev[0] + n * Aprev[1];
		Aprev[0] = Aprev[1];
		Aprev[1] = A;

		B = Bprev[0] + n * Bprev[1];
		Bprev[0] = Bprev[1];
		Bprev[1] = B;

		if (((double)B / (double)A) == x)
		{
			break;
		}
	}

	return Fraction(
		B,
		A,
		fraction64
	);
}

