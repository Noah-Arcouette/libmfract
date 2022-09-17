#include "libdante.h"
#include <stdio.h>
int main ()
{
	fraction64 y = f64apr(3.141592653589793, 330);

	printf("%016lx %.22lf\n", y, f64float(y));

	return 0;
}
