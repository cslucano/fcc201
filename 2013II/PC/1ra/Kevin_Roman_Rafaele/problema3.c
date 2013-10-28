#include<stdio.h>

int main()
{
	int año, mes, a, b, c, d;
	printf("Ingrese el año\n");	
	scanf("%d", &año);
	printf("Ingrese el numero de mes\n");
	scanf("%d", &mes);
	a=mes%2;
	b=año%400;	
	c=año%100;
	d=año%4;
	if(a==1)
	printf("El mes tiene 31 dias\n");
	else
	{
		if(mes==2)
		{
			if(c==0)
			{
				if(b==0)
				printf("EL mes tiene 29 dias\n");
				else
				printf("El mes tiene 28 dias\n");		
			}		
			else
			{
				if(d==0)
				printf("El año tiene 29 dias\n");
				else
				printf("El año tiene 28 dias\n");			
			}		
		}		
		else
		printf("EL mes tiene 30 dias\n");
			
	}
	return 0;
}
