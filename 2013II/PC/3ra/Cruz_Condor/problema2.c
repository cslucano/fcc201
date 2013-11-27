#include<stdio.h>
#define MAX 10

int ordenaVector(int V[],int n){
	int i,j,aux,m;
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

for(i=0;i<n;i++) if(V[i]==i) m=i;

for(i=m;i<n;i++){
if(V[i]==i+1) printf("El numero que falta es %d \n",i);

}
}



int main(){
int V[MAX],n;

	printf("El entero que se repite es %d \n",ordenaVector(V,n));

}

