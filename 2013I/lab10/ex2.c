#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
  printf("direccion #n para n : %p, %d\n", &n, n);
  if(n==1 || n==0)
    return 1;
  return n * factorial(n-1);
}

int main()
{
  printf("direccion funcion main : %p\n", (void *)main);
  printf("direccion funcion factorial : %p\n", (void *)factorial);
  int a, b;
  printf("direccion a : %p\n", &a);
  a = 3;
  b = factorial(a);
  printf("suma: %d\n", b);
  return 0;
}
