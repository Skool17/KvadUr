#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "diskr.h"

extern int N;
void function(float a, float b, float c, float D)
{	
	float x1,x2,x;
	if (D<0)
	{
		printf("D = %7.2f, D<0 Kornei net \n", D);
	}
	if (D>0)
	{
		x1 = (- b + sqrt(D) / (2*a));
		x2 = (- b - sqrt(D) / (2*a));
		printf("D = %7.2f \n", D);
		printf("x1 = %7.2f \n", x1);
		printf("x2 = %7.2f \n", x2);
	}
	if (D==0)
	{
		printf("D = %7.2f \n", D);
		x=(- b / (2*a));
		printf("x = %7.2f \n", x);
	}
}
