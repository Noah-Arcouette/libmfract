#include "libdante.h"
#include <stdio.h>

int main ()
{
	fraction x = Fraction(7, 10, fraction);
	fraction y = Fraction(2, 5, fraction);

	x = fmod(x, y);

	printf("%08x\n", x);
}
