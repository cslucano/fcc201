#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int j=-1,signo=1,i;
    float f=1,pi=0;
          
    for(i=0;i<=100;i++,signo*=-1)
    {     
         j+=2;     
         f=pow(3,(1/2)-i);
         pi+=signo*2*f/j;
    }
    printf("pi es igual a :%f\n",pi);
    return 0;
}
