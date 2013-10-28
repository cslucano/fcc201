#include <stdio.h>


int main(){

 int hora, min;
 char c;
 
 printf("\ningrese la hora\n");
 printf("ingrese los 5 digitos de la hora\n");
 scanf("%d%c%d",&hora,&c,&min);

 if(hora>12){ 
	hora=hora-12;
	printf("la hora es: %d:%d PM\n",hora,min);
       }
 else  
	printf("la hora es: %d:%d AM\n",hora,min);


return 0;
}
