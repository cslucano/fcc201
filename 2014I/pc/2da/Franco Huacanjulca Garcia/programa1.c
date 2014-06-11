#include<stdio.h>
#include<math.h>
float _pi()
   {int n;
    float p=0,p1;
    for(n=0;n<=10000;n++){
    p1=(2*((float)pow(-1,(float)n)*(float)pow(3,(float)(0.5-n))))/((2*n)+1);
    p=p1+p;}
   return p;}
int main()
{printf("La magnitud de PI=%.5f \n",_pi());
return 0;}   
