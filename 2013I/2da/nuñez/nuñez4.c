#include<stdio.h>

float cake(float n)
{float a,b;
  a=(n*n*n)/6;
  b=5*n/6;
  return a+b+1;
}

int main(){
 int i;
 float n;
  printf("introdusca el numero de terminos de la sucesion: ");
  scanf("%f",&n);
 
   for(i=1;i<=n;i++)
     printf(",%.0f",cake(i-1));

return 0;
}
