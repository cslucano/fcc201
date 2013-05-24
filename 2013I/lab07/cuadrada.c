#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x[100];
  float y[100];
  int i;
  for(i=0;i<100;i++)
  {
    x[i] = 0.1*i;
    y[i] = sin(x[i])+0.333*sin(3*x[i])+0.2*sin(5*x[i]);
  }

  for(i=0;i<100;i++)
  {
    printf("%.2f %.2f\n", x[i], y[i]);
    
  }
  return 0;
}
