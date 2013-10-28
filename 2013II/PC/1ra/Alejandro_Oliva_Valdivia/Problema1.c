#include<stdio.h>
int main(){
int a,b;
printf("Ingrese la hora:\n");
scanf("%d:%d",&a,&b);
if(b>=0&&b<=59){
	if(a<=12&&a>=0){
		printf("La hora es %d:%d AM\n",a,b);}
	else{
		if(a<=24){printf("La Hora es %d:%d PM\n",a-12,b);}
		else{printf("Hora No Valida\n");}
		}
	}
else{printf("Hora No Valida\n");}
return 0;
}
