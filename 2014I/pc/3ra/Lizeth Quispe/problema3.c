#include <stdio.h>
#define TAM 15
#define MAX 50
void intercambio(int* x, int* y);
void ordenar (int a[], int n);
int main(){
	int suma,i;
	int arreglo[TAM];
	for(i=0;i<TAM;i++){
		arreglo[i] = rand() % MAX;
	}
		for(i=0;i<TAM;i++){
		printf("%d  ",arreglo[i]);
		}
	puts(" ");

	suma=SumaDosMasGrandes(arreglo,TAM); 
	for(i=0;i<TAM;i++){
		printf("%d  ",arreglo[i]);
		}
	puts(" ");
	printf("La suma maxima es %d",suma);
	
	return 0;
	}
int SumaDosMasGrandes(int* a, int n){
	int i,j,aux,suma;
	for (i=0;i<(n-1);i++){
	
		for (j=0;j<n-i-1;j++){
			if (*(a+j) > *(a+j+1)){ /* Para ordenar en orden decreciente usar < */
				aux    = *(a+j);
				*(a+j)   = *(a+j+1);
				*(a+j+1) = aux;
			}
		}
	}
	suma=*(a+TAM-1)+*(a+TAM-2);
	return suma;
}
