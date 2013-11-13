#include <stdio.h>
#include <math.h>

int main(){

float a=0.01, pi=3.14156; 
float x, DF, limite;

limite=pow(10,-5);

do{	
	
	DF=2*x-2*pi;

	x= x-a*DF;
	printf("Xn+1:%f\n",x);
	
	}while(fabs(DF)>limite);


return 0;
}
