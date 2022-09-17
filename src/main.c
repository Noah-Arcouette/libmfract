#include "libdante.h"
#include <stdio.h>

int main ()
{
	fraction64 f = Fraction(1, 5, fraction64);
	fraction64 x = Fraction(1, 2, fraction64);

	fraction64 y = fadd(f, x);

	printf("%016lx %016lx %016lx\n", f, x, y);

	return 0;
}
