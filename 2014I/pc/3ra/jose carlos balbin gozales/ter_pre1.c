#include<stdlib.h>
#include<stdio.h>
#define TAM 1000000
int main(){
int v[TAM];
int i,j,aux,cont=0;
//inicializacion
printf("ingrese %d numeros del 1 al 1000000 diferentes y en desorden\n",TAM);
for(i=0;i<TAM;i++){
scanf("%d",&v[i]);
}
//cambio de variable
srand(time(NULL));
i=rand()%999999;
v[i]=i+1;
//ordenacion
for(i=0;i<TAM-1;i++){
   for(j=0;j<TAM-i;j++){
      if(v[j]>v[j+1]){
      aux=v[j];
      v[j]=v[j+1];
      v[j+1]=aux;
      }
   }
}
//el que se repite
for(i=0;i<TAM-1;i++){
   for(j=i+1;j<TAM-i;j++){
      if(v[i]==v[j]){
      printf("%d",v[i]);
      }
   }

}

printf("\n");
return 0;
}
