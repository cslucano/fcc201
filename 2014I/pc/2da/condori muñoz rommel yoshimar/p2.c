#include<stdio.h>
int suma(int x){
        int i,s;
        for(i=0,s=0;i<x;i++){
           s=s+i;
          }
       return s;
    }

void main(){
      int n;
      printf("dar la cantidad de numeros que se quiere sumar\n");
      scanf("%d",&n);
      printf("la suma pedida es %d\n",suma(n));
      }
