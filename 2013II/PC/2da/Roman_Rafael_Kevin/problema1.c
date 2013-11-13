#include<stdio.h>
#include<math.h>

int main()
{
	float pi; int k, i, t;
	i=1;
	pi=1;
	k=1;
	t=1;
	while(pi-3.14159>0.00001 || 3.14159-pi>0.00001){
		t*=3;
		pi=pi-i/(t*(2*k+1));
		k++;
    printf("%f\n", pi);
		i=0-i;}
	pi=2*1,732050808*pi;
	printf("pi se aproxima a %f", pi);
	return 0;
}
