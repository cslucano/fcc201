#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char palabra[]="ma asd asfsdfd";
	
	int i,j,a=0,l=0;
	int grama;
	
	grama=strlen(palabra)*(strlen(palabra)+1)/2;
	
	char gram[grama][strlen(palabra)];
	
	
	//printf("%d\n",grama);
	//printf("%d\n",strlen(palabra));
	do{
	for(j=0;j<strlen(palabra);j++){
		for(i=a;i<=j;i++){
				printf("%c",palabra[i]);
				gram[l][i-a]=palabra[i];
				}
			l++;
			puts(" ");
			}
		
		a++;
	}while(a<=strlen(palabra));
	
	
	puts(" ");
	for(l=0;l<=grama;l++){
		printf("%s\n",gram[l]);
		}


return 0;
}
//No pude hacer el ordenamiento lexicologico
