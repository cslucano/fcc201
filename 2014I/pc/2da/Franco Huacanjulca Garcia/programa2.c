#include<stdio.h>
int suma(int x);
int main()
{
int n;
printf("Introduzca un numero\n");
scanf("%d",&n);
printf("La suma de los primeros %d numeros, es %d\n",n,suma(n));
return 0;}

int suma(int x)
{int total;
total=x*(x+1)/2;
return total;}
