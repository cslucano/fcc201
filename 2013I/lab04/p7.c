#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;

  int x, y;
  y = -10;
  for(; y<=10;y++)
  {
    for(x=-10; x<=10;x++)
    {
      a = (x*x + y*y < 25.0);
      b = (x*x/36.0 + y*y/25.0 < 1);
      c = y >= 1 - x;
    
      int u, v;
      u = a && b && c;
      v = ( !a && b ) || ( a && b );
    
        printf("%d",v);
    }
    printf("\n");
  }

  return 0;
}
