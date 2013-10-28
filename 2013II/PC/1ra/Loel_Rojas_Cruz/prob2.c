#include<stdio.h>
#include<stdlib.h>
int main()
{
   int N,A,B,C,D;
   printf("Ingrese cuatro digitos de un numero N:\n");
   printf("A:");
   scanf("%d",&A);
   printf("B:");
   scanf("%d",&B);
   printf("C:");
   scanf("%d",&C);
   printf("D:");
   scanf("%d",&D);
   if(C*10+D>50)
   {
    B=B+1;
   }
   N=A*1000+B*100;
   printf("El entero mas proximo es: \n %d \n",N);   
         
  return 0;
}
   
