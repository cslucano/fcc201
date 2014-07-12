#include <stdio.h>
#include <stdlib.h>
int main(){

	int *valor,val;
	val=obtenerEntero(&valor);
	puts("Retorna ");
	printf("%d \n",val);
	printf("%p",val);
	return 0;
}

int obtenerEntero(int* valor){
	int m;
	puts("Introduzca entero: ");
	scanf("%d",&m);
	*valor=m;

return *valor;
}
