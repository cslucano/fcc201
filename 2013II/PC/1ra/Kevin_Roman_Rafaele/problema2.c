#include<stdio.h>

int main()
{
	int A, B, C, D, CD, N;
	printf("Ingrese el digito de los millares A\n");
	scanf("%d", &A);
	printf("Ingrese el digito de las centenas B\n");
	scanf("%d", &B);
	printf("Ingrese el digito de las decenas C\n");
	scanf("%d", &C);
	printf("Ingrese el digito de las unidades D\n");
	scanf("%d", &D);
	CD=10*C+D;
	if(CD<=51) N=1000*A+100*B;
	else N=1000*A+100*B+100;
	printf("El numero redondeado es %d \n",N);
	return 0;
}
