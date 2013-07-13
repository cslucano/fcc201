#include<stdio.h>

int main(){
 int i,cant;

  for(i=1;i<=20;i++)
  {
     printf("comprador %d ",i);
     printf("ingrese la cantidad: ");
     scanf("%d",&cant);
      if(10<cant)
          printf("usted tendra un 15 porciento de descuento\n");
      else
          printf("usted tendra un 0 porciento de descuento\n");
  }   
     
 
return 0;
}
