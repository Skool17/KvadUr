#include "diskr.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a,b,c,D;
	printf("Please, enter a b c \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	D=b*b-4*a*c;
	function(a,b,c,D);
}
