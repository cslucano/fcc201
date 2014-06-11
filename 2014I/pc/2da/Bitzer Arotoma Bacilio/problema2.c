#include<stdio.h>
#include<stdlib.h>
int suma(int x);
int main()
{   
    int n,y;
    printf("n=");
    scanf("%d",&n);
    y=suma(n);
    printf("la suma es : %d\n",y);
    return 0;
}
int suma(int x)
{ 
   int i,s=0;
   for(i=1;i<=x;i++)
     s+=i;
   return s;
}
