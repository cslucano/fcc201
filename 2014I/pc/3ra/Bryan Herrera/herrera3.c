#include<stdio.h>
#define TAM 1000000
int sumadedosmasgrandes(int *V,int x);
int main(){
int A[TAM]={1,4,3,4,5,6,7,8,9,10};

printf("la suma de los enteros mas grandes del arreglo es %d\n",sumadedosmasgrandes(A,10));

return 0;
}

int sumadedosmasgrandes(int *V ,int x){
int aux,aux1,i,j,k;
aux=V[0];
aux1=V[0];

for(i=1;i<x;i++){
if(V[i]>aux){
aux=V[i];
k=i;
 }
}

for(j=1;j<x;j++){
if(aux1<=V[j] && j!=k)
aux1=V[j];
}

return aux+aux1;

}





