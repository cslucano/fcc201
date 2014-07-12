#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a;
	char* s;
	char* t;
	
	a=cadenasufijo(&s,&t);
	if(a==1){
		printf("La cadena  es sufijo");
		}
	else if(a==0){
		printf("La cadena  NO es sufijo de ");
		}
	return 0;
	}
int cadenasufijo(char* s,char* t){
	char suf[strlen(s)][strlen(s)];
	int i,j,m;
	printf("Ingrese cadena: \n");
	scanf("%s",s);
	
	printf("Sufijos: \n");
	for(j=0;j<strlen(s);j++){
		for(i=j;i<strlen(s);i++){
			//printf("%c",*(s+i));
			suf[j][i-j]=*(s+i);
			}
		puts(" ");
		}
		printf("Ingrese posible sufijo: \n");
		scanf("%s",t);
		puts(" ");
		/*printf("%s\n",suf[0]);
		printf("%s\n",suf[1]);
		printf("%s\n",suf[2]);
		printf("%s\n",suf[3]);
		printf("%s\n",suf[4]);
		printf("%s\n",suf[5]);*/
		
	m=strcmp ( suf[strlen(s)-strlen(t)],t);
		if(m==0){
			return 1;
			}
		else{
			return 0;
			}
		
		
}
//Tuve problemas para construir el arreglo de cadenas donde coloco los sufijos exttraidos de la palabra ingresada.
