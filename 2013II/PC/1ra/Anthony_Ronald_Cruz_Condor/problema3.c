#include<stdio.h>
#include<stdlib.h>

int main()
{

int mes,ano;

printf("Ingrese ingrese el numero de mes espacio el año:\n");
scanf("%d %d",&mes,&ano);


if( (ano % 4==0 && (ano%100==0)!=0) || (ano%400 ==0) ){
	
	if( mes==1 || mes==3 || mes==5 || mes==7 || mes==9 || mes==10 || mes==12)
	printf("este mes tiene 31 dias");
	else if ( mes==4|| mes==6|| mes==8|| mes==11)	
	printf("este mes tiene 30 dias");
	else if( mes==2)
	printf("este mes tiene 29 dias");	

}
else
{
	if( mes==1 || mes==3 || mes==5 || mes==7 || mes==9 || mes==10 || mes==12)
	printf("este mes tiene 31 dias");
	else if ( mes==4|| mes==6|| mes==8|| mes==11)	
	printf("este mes tiene 30 dias");
	else if( mes==2)
	printf("este mes tiene 28 dias");
}

return 0;
}
