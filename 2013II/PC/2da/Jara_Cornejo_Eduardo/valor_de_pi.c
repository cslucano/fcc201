#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float pi=0,k=0;
while(k<10)
{ 

pi=pi + (2.0*pow(-1.0,k)*pow(3.0,0.5-k)/(2.0*k+1.0));
k++;
}
printf("valor de pi=%f\n",pi);
return 0;
}
