#include<stdio.h>
#include<math.h>

int main()
{
float x=4,m,a=0;

do{
m=((pow(x,3)-(10*x)+1)/(3*pow(x,2)-10));
x=x-m;
if(m<=0.0001)
  break;
}while(!a);

printf("el valor aproximado a la raiz:%f %f\n",x,m);
return 0;
}
