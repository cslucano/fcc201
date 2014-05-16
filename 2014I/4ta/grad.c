#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return (x-3.14159)*(x-3.14159)-10;
}

float f_prima(float x)
{
	return 2*(x-3.14159);
}

int main()
{
	float x_n0 = 10;
	float x_n1;
	float x_prima = f_prima(x_n0);
	
	printf("%.10f\n", x_n0);
	
	while (fabs(x_prima)>0.001) 
    {
		x_n1 = x_n0 - 0.01 * x_prima;
		
		x_n0 = 	x_n1;
		x_prima = f_prima(x_n0);
    }
	printf("%.10f\n", x_n0);

	return 0;
}

