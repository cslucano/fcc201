#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float* reservar(int f){

	float* m;
	m=malloc(f*sizeof(float));
	
return m;
}



void insertar(float* m,int f){
	int i, j;

	printf("ingrese los datos\n");
	for(i=0;i<f;i++)	
	scanf("%f",(m+i));
	
}


float* ordenar(float* v,int tam,int n){
	int aux=0;
	int i, j;
	float* vect;	

	for(j=0;j<tam;j++){
		for(i=0;i<tam;i++){
			j++;
			if(*(v+i)>*(v+j)){
			aux=*(v+i);
			*(v+i)=*(v+j);
			*(v+j)=aux;
			}
		}

	}
	
	for(i=0;i<n;i++)
	*(vect+i)=*(v+i);
return vect;
}


void imprimir(float* vect,int n){
	int i;
	for(i=0;i<n;i++)
	printf("%f ",*(vect+i));
	
}




void main(){

int tam, n;
float* vector;
float* vector_ordenado;



	printf("ingrese el tamaño\n");
	scanf("%d",&tam);

	vector=reservar(tam);
	insertar(vector,tam);
	imprimir(vector,tam);

	printf("ingrese un entero\n");	
		
	scanf("%d",&n);
	printf("%d",n);
	vector_ordenado=reservar(n);

	vector_ordenado=ordenar(vector,tam,n);
	
	imprimir(vector_ordenado,n);



	free(vector);
	free(vector_ordenado);
}





