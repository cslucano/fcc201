#include<stdio.h>
#define MAX 10

int SumaDosMasGrandes(int* arrInts,int tamano){
	int i,j,aux,resultado;
	//Estoy ordenando los vectores ascendente
for(i=1;i<tamano;i++){
	for(j=0;j<tamano-i;j++){
	if(arrInts[j] > arrInts[j+1]) {
		aux=arrInts[j];
		arrInts[j]=arrInts[j+1];
		arrInts[j+1]=aux;
}
}
}
	//Los dos ultimos espacios serian los mayores valores del vector
resultado=arrInts[tamano-1]+arrInts[tamano-2];
return resultado;
}


int main(){

int* arrInts[MAX];
int tamano;


printf("La suma de los enteros mas grandes es %d \n",SumaDosMasGrandes(*arrInts,tamano));


return 0;
}


