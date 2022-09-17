#include "libdante.h"
#include <stdio.h>

int main ()
{
	fraction f = Fraction(1, 5, fraction);
	fraction x = Fraction(1, 2, fraction);

	fraction y = fadd(f, x);

	printf("%08x %08x %08x\n", f, x, y);

	return 0;
}
