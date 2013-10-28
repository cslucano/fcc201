#include<stdio.h>
#include<stdlib.h>
int main()
{
   int hora;
   int minuto;
   char puntos;
   puntos=':';
   printf("Ingrese la hora a cambiar:\n");
   scanf("%d %c %d",&hora,&puntos,&minuto);
    
   if(hora>12)
   {
    hora=hora-12;
   }
   printf("la hora es:\n %d:%d \n",hora,minuto); 

  return 0;
}
   
