#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float k=0,pi;
while(k>0)
{k++;
if(pi<pow(10,-5))
{
pi=2*pow(-1,k)*pow(3,0.5-k)/(2*k+1);
printf("%f",pi);
}
}

return 0;
}

