#include <stdio.h>
#include <math.h>

void printbar(int n);

int main()
{
  float degree = 0;
  int n;
  float t;
  float y;

  char line[150] = ""; 
  for(n = 0;n<=360;n++)
  {
    degree = n;
    t = M_PI * degree / 180;
    y = sin( t );
    printbar(20* y + 20);
    fflush(stdout);
  }
  return 0;
}
void printbar(int n)
{
  int i;
  for(i=0;i<=n;i++)
  {
    printf("*");
  }
  printf("\n");
  usleep(3000);
}
