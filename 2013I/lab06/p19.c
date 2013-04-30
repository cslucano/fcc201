#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float factorial(float n)
{
  if (n == 0.0 || n == 1.0)
    return 1.0;
  return n * factorial(n-1);
}

float exponencial(float x, float n)
{
  float z = pow(x,n) / factorial(n);
  printf("%.2f\n", z);
  if(z < 0.01){
    return z;
  }
  return z + exponencial(x, n+1);

}

int main()
{
  printf("5!:%.2f\n",factorial(5.0));
  printf("exp(x):%.2f\n",exponencial(5, 0));
  return 0;
}
