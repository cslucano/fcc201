#include <stdlib.h>
#include <stdio.h>

float ALPHA = 10e-2;
float DELTA = 10e-4;

float f(float x)
{
  return 5*x*x*x*x-64*x*x+80*x+500;
}

float f_prima(float x)
{
  return 20*x*x*x-128*x+80;
}

void gradiente_descendiente(float * x)
{
  *x = *x - DELTA * f_prima(*x);
  printf("%.2f\n", *x);
  if(abs(f_prima(*x)) < ALPHA)
    return;
  gradiente_descendiente(x);
  return;
}

int main()
{
  float x;
  x = 4;
  gradiente_descendiente(&x);
  printf("minimo o máximo local x = %.2f\n", x);
  return 0;
}
