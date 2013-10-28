#include <stdio.h>


int main(){
 
 int dias, mes, amo;
 int resto; 

 printf("ingrese el mes y el año\n");
 scanf("%d%d",&mes,&amo);
 
 resto=amo%4;
 
	if(mes==2){
		if(resto==0) dias=29;
		else dias=28;
	printf("En el año %d el mes %d tiene %d DIAS\n",amo,mes,dias);
	}
	if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){  	
	dias=31;	
	printf("En el año %d el mes %d tiene %d DIAS\n",amo,mes,dias);}
	else{
		if(mes==4||mes==6||mes==9||mes==11){
		dias=30;
		printf("En el año %d el mes %d tiene %d DIAS\n",amo,mes,dias);}
		else 
		printf("fecha no valida\n");
	}
 

 



return 0;}
