# include <stdio.h>
int suma_n_primeros (int n){
int i, suma=0;
   for(i=1;i<=n;i++)
       suma+=i;
   return suma;
   }
 void main ()
 {
    int n, suma;
    printf("Introduzca n:");
    scanf("%d",&n);
    if(n<0)
    printf("El numero es negativo.\n");
    else
    {
    suma= suma_n_primeros(n);
    printf("La suma de los %d primeros numeros es: %d.\n",n,suma);
    }
 }

