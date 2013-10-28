#include<stdio.h>
#include<stdlib.h>
int main() 
{  
  int numero ;
  printf("Ingrese el año entre 1000 y 2000: ");
  scanf("%d",&numero)
  while (numero != 0)
{
   if ( numero >=1000)
      numero=numero-1000;
     printf("M");
   if ( numero >=500)
      numero=numero-500;
     printf("D")
   if ( numero >=100)
      numero=numero-100;
     printf("C")
   if ( numero >=50)
      numero=numero-50;
     printf("L")
   if ( numero >= 10)
      numero=numero-10;
     printf("X")
   if ( numero >=5)
      numero=numero-5;
     printf("V")
   
return 0;
 }
