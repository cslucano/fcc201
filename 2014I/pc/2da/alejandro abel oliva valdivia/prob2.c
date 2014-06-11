#include <stdio.h>
int suma_nprimeros(int n)
{
int i,suma=0;
for(i=1;i<=n;i++)
suma += i;
return suma;
}
void main()
{
int n,suma;
printf("Introduce n:\n");
scanf("%d",&n);
if(n<0)
printf("El numero es negativo.\n");
else
{
suma=suma_nprimeros(n);
printf("La sumatoria de los %d primeros numeros es: %d.\n",n,suma);
}


