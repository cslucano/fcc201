#include <stdio.h>
#include <stdlib.h>

int main()
{
  int* nota;
  //nota = (int*)malloc(4);//mEMORY allocATION
  nota = (int*)malloc(sizeof(int));//mEMORY allocATION
  *nota = 15;

  printf("nota : %d\n", *nota);
  return 0;
}
