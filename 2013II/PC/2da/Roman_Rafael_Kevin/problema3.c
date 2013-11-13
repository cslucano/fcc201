#include<stdio.h>

int main()
{
	float fx, devfx, x;
	x=0-10;
	fx=(x-3.14159)*(x-3.114159)+10;
	devfx=2*(x-3.14159);
	while(devfx>0.00001){
		x=x-0.01*devfx;
		fx=(x-3.14159)*(x-3.114159)+10;
		devfx=2*(x-3.14159);
	}
	printf("La raiz de la funcion es: %f",x);
	return 0;
}
