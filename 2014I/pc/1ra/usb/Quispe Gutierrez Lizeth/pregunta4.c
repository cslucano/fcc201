#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float xm,a,xn;
	int i;
	xn=10;
	i=1;
	do{
		xm = xn -0.2*(xn + 3.1416);
		a=xm;
		xn=a;
		i++;
	}while(fabs(xm)>0.001);
	printf("El valor de i es %d\n",i);
	printf("EL valor de xm es %f \n",xm);
	
	
	return 0;
	}
