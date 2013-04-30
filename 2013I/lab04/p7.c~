#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  int a, b, c;
  a = (x*x + y*y < 25.0);
  b = (x*x/36.0 + y*y/25.0 < 1);
  c = y >= 1 - x;

  int u, v;
  u = a && b && c;
  v = ( !a && b ) || ( a && b );

  if(u)
  {
    printf("esta en u\n");
  }
  else
  {
    printf("no esta en u\n");
  }

  if(v)
  {
    printf("esta en v\n");
  }
  else
  {
    printf("no esta en v\n");
  }


  return 0;
}
