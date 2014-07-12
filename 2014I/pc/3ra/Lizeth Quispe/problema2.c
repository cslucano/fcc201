#include <stdio.h>
#define TAM 10

void imprimir(int a[], int n);
void ordenar (int a[], int n);
void intercambio(int* x, int* y);

int main(){
	int arreglo[TAM]={2,1,5,6,7,3,8,9,3,10};
	int i,j;
	
	imprimir(arreglo,TAM);
	ordenar(arreglo,TAM);
	imprimir(arreglo,TAM);
	for(i=0;i<TAM;i++){
		
			if(arreglo[i]!=i+1){
				printf("falta %d\n",i+1);
				
				}
			
			}
		
		
return 0;
}

void intercambio(int* x, int* y){
	
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}



void ordenar (int a[], int n){
	
	int i,j;
	for (i=n-1;i>0;i--){
		for (j=0;j<i;j++){
			if (a[j] > a[j+1]){
				intercambio(&a[j] ,&a[j+1]);
			}
		}
	}
}

void imprimir(int a[], int n){
	int i = 0;
	for ( ; i < n-1; i++) {
		printf ("%d,%c",a[i], ((i+1)%10==0? '\n' :' '));
	}
	printf ("%d \n",a[n-1]);
}

