#include<stdio.h>

int main()
{
	float fx, devfx, x; int i;
	printf("Escriba el valor de inicio(se recomienda 2): ");
	scanf("%f",&x);
	fx=x*x*x-10*x+1;
	devfx=3*x*x-10;
	while(fx>0.001 && x<=4){
		x=x-fx/devfx;
		fx=x*x*x-10*x+1;
		devfx=3*x*x-10;
	}
	printf("La raiz de la funcion es: %f",x);
	return 0;
}
