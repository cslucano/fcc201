#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int k = a*1000+b*100+c*10+d;
	k += 50;
	k/=100;
	k*=100;
	printf("%d\n",k);
}
