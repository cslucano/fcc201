#include<stdio.h>
#include<math.h>

int main()
{
	double e = 1 , r = sqrt(3.0)  , l = 1.0 , k = 0;
	double pi = 0;	
	double s = (2*e*r)/(l*(2*k+1));
	while( s >= 0.00001 )
	{
		pi += s;
		e*=-1;
		l*=3;
		k++;
		s = (2*e*r)/(l*(2*k+1));
	}
	printf("%0.10lf\n",pi);
}
