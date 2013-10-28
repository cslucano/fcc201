#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
	if(a>=12)
	{
		a-=12;
	}
	if(a<10) printf("0%d:",a);
	else printf("%d:",a);
	if(b<10) printf("0%d\n",b);
	else printf("%d\n",b);
	return 0;
}
