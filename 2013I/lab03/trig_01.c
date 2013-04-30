#include <stdio.h>
#include <math.h>

int main()
{
  float degree = 60;
  float t = M_PI * degree / 180;
  float y = sin( t );
  printf("sin(%.2f) = %.2f\n", degree, y);
  return 0;
}
