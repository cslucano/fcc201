#include<stdio.h>
#include<stdlib.h>
int mcd(int a,int b);
int main()
{  
   int x,y,m;
   printf("x=");
   scanf("%d",&x);
   printf("y=");
   scanf("%d",&y);
   m=mcd(x,y);
   printf("MCD(%d %d)=%d\n",x,y,m);
   return 0;
}
int mcd(int a,int b)
{   
   if(a>b)
     return(mcd(a-b,b));
   else if(b>a)
     return(mcd(b-a,a));
   else if(a==b)
     return a;
}
