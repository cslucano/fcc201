#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
void copiarcadena(char *s,char *t){
	t=malloc((strlen(s)+1)*sizeof(char));
	printf("copia:");
	strcpy(t,s);
	printf("%s\n",t);
	free(t);
	t=NULL;
}

int main(void){
	char *s,*t;
	s=malloc(MAX*sizeof(char));
	printf("ingrese cadena:");
	gets(s);
	copiarcadena(s,t);
	free(s);
	s=NULL;
return 0;
}
