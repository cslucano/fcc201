#include <stdio.h>
#include <stdlib.h>

int main()
{
  int v1;
  int* nota;
  nota = &v1;
  *nota = 15;

  printf("nota : %d\n", *nota);
  return 0;
}
