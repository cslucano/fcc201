#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x[100];
  float y[100];
  float y_prima[100];
  int i;
  for(i=0;i<100;i++)
  {
    x[i] = 0.1*i;
    y[i] = sin(x[i]);
    if(i > 0)
    {
      y_prima[i] = (y[i] - y[i-1])/(x[i] - x[i-1]);
    }
  }

  for(i=0;i<100;i++)
  {
    printf("%.2f %.2f %.2f\n", x[i], y[i], y_prima[i]);
    
  }
  return 0;
}
