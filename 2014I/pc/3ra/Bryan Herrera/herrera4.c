#include<stdio.h>
#define TAM 40
int eliminarduplicado(int V[],int x);
int main(){
int A[15]={1,2,2,3,3,3,4,5,6,6,7,8,9,9,10};

printf("la cantidad de elementos no duplicados es %d\n",eliminarduplicado(A,15));

return 0;
}

int eliminarduplicado(int V[],int x){
int i,j,k,cont=0;
for(i=0;i<x;i++){
k=0;
for(j=0;j<x;j++){
if(V[i]==V[j])
k++;
}

if(k==1)
cont++;
}

return cont;

}




