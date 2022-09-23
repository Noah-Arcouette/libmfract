#include "libdante.h"
#include <stdio.h>
#include <math.h>
#define F64PHI 0xb11924e16d73e55f // 18 digits
#define F32PHI 0xb5206ff1         // 9 digits
#define F16PHI 0xe990             // 4 digits
// 4807526976/2971215073 True Phi

int main ()
{
	puts("John Wallis\n===========");

    int iterations    = 2;
    fraction64 offset = Fraction(2, 1, fraction64);
    fraction64 pi     = Fraction(1, 1, fraction64);

    for(int i = 1; i <= iterations; i++)
    {
        pi = f64mul(pi, offset);

        // if ((i%2) == 1) 
        // {
        // 	offset += Fraction(0, 2, fraction64);
        // }
        // else
        // {
        // 	offset += Fraction(2, 0, fraction64);
        // }

        // offset = f64simplify(offset);
        // pi     = f64simplify(pi);
    }

    // pi = f64mul(pi, Fraction(2, 1, fraction64));

    printf("%016lx\n", pi);

	return 0;
}
