#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
  double p,x=4,f,a=3.1415686607;
  do {
    f=0.01*2*(x-a);
    x+=-f;
     }
  while (f>=0.00005);
    p=pow(x-a,2)+10;
 printf("El error es %lf\n",f);
 printf("El valor de x es %lf\n",x);
 printf("El valor del minimo local es %lf\n",p);
     

return 0;
}
