#include <stdio.h>
#include <math.h>

int main()
{
  float degree = 0;
  int n;
  float t;
  float y;
  for(n = 0;n<=360;n++)
  {
    degree = n;
    t = M_PI * degree / 180;
    y = sin( 2 * t );
    printf("sin(%.2f) = %.2f\n", degree, y);
  }
  

  return 0;
}
