#include <stdlib.h>
#include <stdio.h>
int main()
{
  int a;
  unsigned int b;
  short int c;
  long int d;
  float e;
  double f;
  char g;

  printf("tamaño variable int %d\n", (int)sizeof(a));
  printf("tamaño variable unsigned int %d\n", (int)sizeof(b));
  printf("tamaño variable short int %d\n", (int)sizeof(c));
  printf("tamaño variable long int %d\n", (int)sizeof(d));
  printf("tamaño variable float %d\n", (int)sizeof(e));
  printf("tamaño variable double %d\n", (int)sizeof(f));
  printf("tamaño variable char %d\n", (int)sizeof(g));
  //punteros
  printf("tamaño variable &a %d\n", (int)sizeof(&a));
  return 0;
}
