#include "libdante.h"
#include <stdio.h>

int main ()
{
	fraction64 f = Fraction(1, 0xffffffff, fraction64);

	printf("%d %016lx\n", F64Int(f), f);

	f = f64simplify(f);

	printf("%d %016lx\n", F64Int(f), f);

	return 0;
}
