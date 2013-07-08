#include <stdlib.h>
#include <stdio.h>
#include <string.h>
# define TAM 80
int main(){
	char palabra[TAM+1];
	char aux1[TAM+1];	
	char aux2[TAM+1];
	char aux3[TAM+1]; 	
	int i,j;    	
	puts("Ingrese su nombre y apellidos: ");
    	gets(palabra);	
	for(i=0;i<200;i++){
	 if(palabra[i]=' '){
	  strncpy(aux1,palabra,3);
	  i=0;	  
	}
		
	}	
	puts("La clave es:");	
	puts(aux1);
	return 0;
}

















/*   		for(contador=0;contador<3;contador++)		
		if(cadena[contador]=2){
		c1=
		printf("la clave es:",cadena[i])

		else if(cadena[contador]=' '){
		contador=0;		
		}		
		}		
		while(cadena[contador] !=' ')
		{
		contador++;
		}*/









