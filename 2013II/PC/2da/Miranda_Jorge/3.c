#include <stdio.h>
#include <math.h>

double ff( double x )
{return 2.0*(x-3.141621);}
double fff( double x )
{return 2.0;}

int main()
{
	double x = 5;
	while( ff(x) > 0.000001 )
	{
		x = x - ff(x)/fff(x);
	}
	printf("%lf\n",x);
}
