#include "libdante.h"
#include <stdio.h>
#define PHI 3012527569797290405

int main ()
{
	fraction f   = Fraction(1, 2, fraction);
	fraction one = Fraction(1, 1, fraction);

	f = f32mul(f, Fraction(2, 1, fraction));

	if (f32norm(f, one) == f32norm(one, f))
	{
		printf("Same\n");
	}

	printf("f: %d/%d %d\none: %d/%d %d\n", 
		f32num(f),
		f32den(f),
		f32norm(f, one),
		f32num(one),
		f32den(one),
		f32norm(one, f)
	);
	
	return 0;
}
