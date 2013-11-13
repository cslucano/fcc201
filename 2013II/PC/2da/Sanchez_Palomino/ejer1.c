#include <stdio.h>
#include <math.h>


int main(){

float k=0, pi=0, i, j, limite; 

limite=pow(10,-5);

do{
	i=2*pow(-1,k);
	i=i*pow(3,0.5-k);	
	j=2*k+1;
	pi=pi+i/j;

	k++;
	printf("%f\n",pi);
	}while(fabs(i/j)>limite);


return 0;
}
