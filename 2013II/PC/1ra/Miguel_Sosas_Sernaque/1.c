#include<stdio.h>
#include<stdlib.h>
int main() 
{
 int a,b,c,d,n ;
 printf("Ingrese los 4 digitos para el numero N: ");
 scanf("%d%d%d%d",&a,&b,&c,&d);

 if( c*10 >=50 )
   n= a*1000 + (b+1)*100;
 else
   n= a*1000 + b*100;
printf("El numero es %d\n",n);
  
return 0;
}
