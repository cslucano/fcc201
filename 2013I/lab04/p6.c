#include <stdlib.h>
#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int i;
  for(i = 0 ; ; i++)
  {
    printf("%d\n", rand()%100+1);
  }
  return 0;
}
