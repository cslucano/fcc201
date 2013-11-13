#include<stdio.h>
#include<math.h>

int main()
{
 int k;
 float pi,m,n;


for(k=0,pi=0;;k++)
 {
  m=((2*pow(-1,k)*pow(3,0.5-k))/(2*k+1));
  pi=pi+m;
  n=((2*pow(1,k)*pow(3,0.5-k))/(2*k+1));
  if(n<0.00001)
   break;
 }

printf("el valor de pi aprox.= %f\n",pi);
return 0;
}
