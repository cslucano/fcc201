#include<stdio.h>
#define TAM 1000000
int numnopertenece(int V[],int x);
int main(){
int A[TAM]={8,3,4,7,9,13,35};

printf("el numero que no esta en el arreglo es %d\n",numnopertenece(A,7));

return 0;
}

int numnopertenece(int V[],int x){
int i,aux=0;
for(i=0;i<x;i++){
if(aux<=V[i])
aux=V[i]+1;
}

return aux;

}









