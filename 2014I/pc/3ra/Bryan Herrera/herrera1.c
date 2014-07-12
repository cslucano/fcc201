#include<stdio.h>
#define TAM 1000000
int busqueda(int V[],int n);
int main(){
int A[TAM]={6,2,3,4,5,5,1,7,8,9};

printf("el numero repetido en el arreglo es %d\n",busqueda(A,10));

return 0;
}

int busqueda(int V[],int n){
int i,j;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(V[i]==V[j])
return V[j];
  }
 }
}




