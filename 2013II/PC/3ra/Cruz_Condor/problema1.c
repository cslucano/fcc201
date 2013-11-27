#include<stdio.h>
#define MAX 1000000

int ordenaVector(int V[],int n){
	int i,j,aux;
	//Estoy ordenando los vectores ascendente
for(i=1;i<n;i++){
	for(j=0;j<n-i;j++){
	if(V[j] > V[j+1]) {
		aux=V[j];
		V[j]=V[j+1];
		V[j+1]=aux;
}
}
}
}



int elementoRepetido(int V[],int n){

int i,num_repetido;
for(i=0;i<n;i++){
	if(V[i]==V[i+1]) num_repetido=i+1;

}
	return num_repetido;
}

int main(){
int V[MAX],n;
//n tamaño del vector

	printf("El entero que se repite es %d \n",elementoRepetido(V,n));

}
