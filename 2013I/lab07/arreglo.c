#include <stdio.h>
#include <stdlib.h>

int main()
{
  float serie[25];
  int n;
  float numero;
  scanf("%d", &n);
  int i;

  for(i=0;i<n;i++)
  {
    scanf("%f", &numero);
    serie[i] = numero;
  }

  for(i=0;i<n;i++)
  {
    printf("%.2f\n", *(serie + i));
  }
  return 0;
}
