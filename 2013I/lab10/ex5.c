#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num_alumnos;
  int* nota;
  scanf("%d", &num_alumnos);
  int i;
  for(i=0; i< num_alumnos; i++)
  {
    nota = (int*)malloc(sizeof(int));//mEMORY allocATION
    scanf("%d", nota);
    printf("nota %p: %d\n", nota, *nota);
    //free(nota);
  }

  return 0;
}
