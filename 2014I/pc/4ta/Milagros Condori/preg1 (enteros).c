#include<stdio.h>
#include<stdlib.h>

void aleatoria(int *n){ //por dato del problema la entrada debe ser un entero
	
	int aleatorio;
	
	srand(time(NULL));// sin mas especificaciones asumimos signos aleatorios para la salida
	aleatorio= 3+rand()%2; // teniendo un intervalo de opciones de {3,4} 
	
	if(aleatorio==3)
	     printf("el numero resulta: -%d\n",*n);
	
	if(aleatorio==4)
	     printf("el numero resulta: +%d",*n);    
}

void main(){

	int n;

	printf("ingrese numero: \n");
	scanf("%d",&n);
	aleatoria(&n);
	
}
