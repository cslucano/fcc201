#include<stdio.h>
int main()
{int a[1000000],b[1000000],i,j,s;
for(i=0;i<5;i++)
	{b[i]=0;
scanf("%d",&a[i]);}
for(i=0;i<1000000;i++)
{b[a[i]-1]=b[a[i]-1]+1;}
for(i=0;i<1000000;i++)
 {
if(b[i]==0)
printf("%d \n",i+1);
}
}
