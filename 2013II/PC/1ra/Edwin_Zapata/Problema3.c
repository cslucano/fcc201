#include<stdio.h>
int main(){
int m,a;
printf("Ingrese el Mes y el Año en numeros:\n");
scanf("%d %d",&m,&a);
if((a%4==0&&a%100!=0)||a%400==0){
	switch(m){
		case 1:printf("Tiene 31 dias\n");break;
		case 2:printf("Tiene 29 dias\n");break;
		case 3:printf("Tiene 31 dias\n");break;
		case 4:printf("Tiene 30 dias\n");break;
		case 5:printf("Tiene 31 dias\n");break;
		case 6:printf("Tiene 30 dias\n");break;
		case 7:printf("Tiene 31 dias\n");break;
		case 8:printf("Tiene 31 dias\n");break;
		case 9:printf("Tiene 30 dias\n");break;
		case 10:printf("Tiene 31 dias\n");break;
		case 11:printf("Tiene 30 dias\n");break;
		case 12:printf("Tiene 31 dias\n");break;
		default:printf("Mes no valido\n");break;
		}
	}
else{
	switch(m){
		case 1:printf("Tiene 31 dias\n");break;
		case 2:printf("Tiene 28 dias\n");break;
		case 3:printf("Tiene 31 dias\n");break;
		case 4:printf("Tiene 30 dias\n");break;
		case 5:printf("Tiene 31 dias\n");break;
		case 6:printf("Tiene 30 dias\n");break;
		case 7:printf("Tiene 31 dias\n");break;
		case 8:printf("Tiene 31 dias\n");break;
		case 9:printf("Tiene 30 dias\n");break;
		case 10:printf("Tiene 31 dias\n");break;
		case 11:printf("Tiene 30 dias\n");break;
		case 12:printf("Tiene 31 dias\n");break;
		default:printf("Mes no valido\n");break;
		}
	}
return 0;
}
	
