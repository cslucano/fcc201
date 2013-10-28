#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
char c;

printf("Introdusca 5 caracteres para la hora por ejemplo 09:00  :");
scanf("%d%c%d",&a,&c,&b);
//printf("%d:%d",a,b);

if (a>12){
	a=a-12;	
	printf("%d:%d\n",a,b);
}
else if (a>=0 && a<13){
	printf("%d:%d\n",a,b);		
}
else

printf("hora imposible\n");

return 0;
}
