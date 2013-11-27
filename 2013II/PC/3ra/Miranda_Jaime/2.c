#include <stdio.h>
#include <math.h>

double f( double x ){return x*x*x-10*x+1;}
double ff( double x ){return 3*x*x-10;}

int main()
{
	double x = 4;
	while( f( x ) > 0.0001  )
	{
		x = x - f(x)/ff(x);
	}
	printf("%lf\n",x);
}
