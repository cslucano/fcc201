#include <stdio.h>
#include <math.h>

int main(void)
{
 double k, sum, funcion, expo;
  
 expo = 0.0;
 k = 0.0;
 sum = 0.0;
 

 do
 {
  expo = pow(-1.0,k);
  funcion = (2.0*expo*pow(3.0,0.5-k))/(2.0*k+1.0);
  sum = sum + funcion;
  k = k + 1.0;
 }
 while(fabs(funcion) >= 0.00001);

 printf("El valor de pi es %f\n", sum);

return 0;
}
