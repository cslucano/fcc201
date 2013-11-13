#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
  float e,n=4,m,f,g;
  do {
    f= pow(n,3)- 10.0*n +1;
    g= 3*pow(n,2) -10;
    e=(float)f/g;
    n+=-e;
}
 while(e>=0.00005);
    printf("El valor de la raiz = %.10f\n",n);  
   
return 0;
}
