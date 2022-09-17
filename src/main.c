#include "libdante.h"
#include <stdio.h>

int main ()
{
	fraction64 f = Fraction(1, 2, fraction64);
	fraction64 x = Fraction(1, 5, fraction64);

	fraction64 y = fsub(f, x);

	printf("%Lf %ld\n", ffloat(y), y);

	return 0;
}
