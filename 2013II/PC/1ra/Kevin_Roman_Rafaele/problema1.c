#include<stdio.h>

int main
{
	char h1, h2, s, m1, m2;
	printf("Escriba la hora\n");
	scanf("%c""%c""%c""%c""%c",&h1,&h2,&s,&m1,&m2);
	if(h1==0)
	printf("%c%c:%c%c AM\n", h1, h2, m1, m2);
	else
	{
		if(h2>=1)
		{
			h1=h1-1;
			h2=h2-2;
			printf("%c%c:%c%c PM\n", h1, h2, m1, m2);
		}
		else
		printf("%c%c:%c%c AM\n", h1, h2, m1, m2);	
	}
	
	return 0;
}
