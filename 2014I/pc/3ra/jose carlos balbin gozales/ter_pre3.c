#include<stdio.h>
#include<stdlib.h>
int suma(int tamano,int v[]);
int main(){
int tam,sum,i;
printf("ingrese el tamaño del vector:\n");
scanf("%d",&tam);
int vector[tam];
//inicializacion
for(i=0;i<tam;i++){
scanf("%d",&vector[i]);
}

sum=suma(tam,vector);
printf("la suma de los numeros mas grandes del vector son : %d",sum);
return 0;
}
//funcion
int suma(int tamano,int v[]){
int i,j,aux,s;
for(i=0;i<tamano-1;i++){
   for(j=0;j<tamano-i;j++){
      if(v[j]>v[j+1]){
      aux=v[j];
      v[j]=v[j+1];
      v[j+1]=aux;
      }
   }
}

for(i=0;i<tamano-1;i++){
   s=v[tamano-1]+v[tamano-2];
}
return s;
}
