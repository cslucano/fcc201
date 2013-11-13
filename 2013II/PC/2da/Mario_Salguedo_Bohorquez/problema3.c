#include <stdio.h>
#include <math.h>

#define Pi 3.1415926

int main(void)
{

 double x, funcion, derivada;
 
 x = 0.0;

 do
 {
 derivada = 2.0*(x-Pi);
 x = x - 0.01*derivada;
 }
 while(fabs(0.01*derivada)>=0.00000001);

 printf("%f, %f.\n", x, (x-Pi)*(x-Pi)+10.0);

return 0;
}
