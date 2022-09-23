#include "libdante.h"
#include <stdio.h>
#include <math.h>
#define PHI 3012527569797290405

int main ()
{
	float target = 3.14159;
    
	fraction32 f = f32apr(target, 10);

	printf("%d/%d\n", f32num(f), f32den(f));
	
	return 0;
}
