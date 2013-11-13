#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
  int k=0;
  float pi,suma=0;
  while ( (float)(2*pow(3,0.5-k))/(2*k+1) >= 0.00005)
  {  
     pi=(2*pow(-1,k)*pow(3,0.5-k))/(2*k+1);
     suma+=pi;
     k++;
  }
    printf("El valor de pi = %.10f\n",suma);  
   
return 0;
}
