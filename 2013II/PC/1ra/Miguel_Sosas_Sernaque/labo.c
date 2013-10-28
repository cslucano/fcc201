#include <stdio.h>
#include <stdlib.h>
int main() {
 float a,b,c,d,e,mayor ;
 printf("Ingrese 5 numeros: ");
 scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
 mayor=a ;
 if (b>=mayor)
  mayor=b ;
 if (c>=mayor)
  mayor=c ;
 if (d>=mayor)
  mayor=d ;
 if (e>=mayor)
  mayor=e ;
 printf("El mayor numero de los 5 es %f\n",mayor);
return 0;
}

