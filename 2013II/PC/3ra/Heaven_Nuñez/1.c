#include<stdio.h>
#define N 1000000
void busque(int a[N]);
int main()
{
 int a[N],i;
 for(i=0;i<N;i++)
   scanf("%d",&a[i]);
 busque(a);
 return 0;
}
void busque(int a[N])
{
 int i,x,m=2;
 for(i=0;i<N && m!=0;i++)
  {
    for(x=0;x<N && m!=0;x++)
     {
       if(a[i]==a[x])
        {
          m--;
        }
     }
  }
 printf("el valor %d se repite 2 veces\n",a[i-1]);
}
