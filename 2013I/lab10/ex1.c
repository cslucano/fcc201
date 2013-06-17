#include <stdio.h>
#include <stdlib.h>

int sumar(int a, int b)
{
  int c = a + b;
  printf("direccion a : %p\n", &a);
  printf("direccion b : %p\n", &b);
  printf("direccion c : %p\n", &c);
  return c;
}

int main()
{
  printf("direccion funcion main : %p\n", (void *)main);
  printf("direccion funcion sumar : %p\n", (void *)sumar);
  int v1, v2, v3;
  printf("direccion v1 : %p\n", &v1);
  printf("direccion v2 : %p\n", &v2);
  printf("direccion v3 : %p\n", &v3);
  v1 = 5;
  v2 = 3;
  v3 = sumar(v1, v2);
  printf("suma: %d\n", v3);
  return 0;
}
