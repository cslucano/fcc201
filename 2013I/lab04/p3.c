#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float razon_presion;
  float k;
  float flujo;
  k = 1.4;
  razon_presion = 0.3;

  flujo = sqrt(k/(k-1)*(pow(razon_presion, 2/k) - pow(razon_presion, (k+1)/k)));

  printf("%.8f\n", flujo);

  return 0;
}
