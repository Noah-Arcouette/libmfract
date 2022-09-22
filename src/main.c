#include "libdante.h"
#include <stdio.h>
#define PHI 3012527569797290405

int main ()
{
	fraction f   = Fraction(1, 2, fraction);
	fraction b   = Fraction(2, 1, fraction);
	fraction one = Fraction(1, 1, fraction);

	f = fmul(f, b);

	f = fsimplify(f);

	if (fchk(one, f))
	{
		printf("1\n");
	}
	else
	{
		printf("%08x\n", f);
	}
	
	return 0;
}
