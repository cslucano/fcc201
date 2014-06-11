#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	puts("\t \tPregunta 2");
	puts("Se va a calcular la suma de los primeros n numeros enteros.");
	puts("Ingrese n:");
	scanf("%d",&n);
	puts(" ");
	printf("La suma es %d.",suma_enteros(n));

}

int suma_enteros(int n){
int i,suma=0;
for(i=1;i<=n;i++)
	suma=suma+i;
return suma;
}
