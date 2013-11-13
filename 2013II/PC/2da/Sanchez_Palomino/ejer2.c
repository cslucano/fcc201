#include <stdio.h>
#include <math.h>

int main(){

float F, DF, x;
float difer, limite;


x=4;
limite=pow(10,-5);

do{
	difer=x;
	F= pow(x,3)-10*x+1;
	DF= 3*pow(x,2)-10;

	x = x-F/DF;
	printf("x:%f\n",x);
	
	difer=x-difer;
	
	}while(fabs(difer)>limite);

return 0;
}
