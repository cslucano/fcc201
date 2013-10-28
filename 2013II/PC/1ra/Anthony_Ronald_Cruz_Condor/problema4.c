#include<stdio.h>
#include<stdlib.h>

int main()
{

int ano;
char I,V,X,L,C,D;
printf("ingrese año");
scanf("%d",&ano);

if(ano>=1000 && ano<= 2000){
	if(año>=1500 && año<=2000){

	C=(año-1500)/100
	printf("%d en numeros romanos es igual a MD",año);

	}
	if(ano>=1000 && ano<=1500){


	printf("%d en numeros romanos es igual a M",año);
	}



M=año/1000;
D=(año-(M*1000))/500;
C=((año-(M*1000))-(D*500))/100;



}



return 0;
}
