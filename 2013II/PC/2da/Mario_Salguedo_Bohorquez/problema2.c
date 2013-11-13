#include <stdio.h>
#include <math.h>

int main(void)
{
 double raiz, funcion, derivada, x;

 x = 2.0;
 
 do
 { 
 funcion = (x*x*x)-10.0*x+1.0;
 derivada = 3.0*(x*x)-10.0;
 x = x - funcion/derivada;

 } 
 while (fabs(funcion)>=0.00001);

 printf("La raiz es %f.\n", x);

return 0;
}
