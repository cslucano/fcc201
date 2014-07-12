#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 30
int cadenaSufijo(char *s,char *t){ //la entrada son dos cadenas s: es una palabra cualquiera, t: es un sufijo 
	int ns,nt,i;
	int c=0;
    	ns=strlen(s);
    	nt=strlen(t);
    	for(i=0;s[(ns-1)-i]==t[(nt-1)-i]&&i<nt;i++){
    		c++;
    	}
    	if(c==nt)
    	   return 1;
    	 else
		   return 0;   
	
}
int main(){
	char s[tam];
	char t[tam];
	int k;
	printf("introduzca una palabra: ");
	gets(s);
	printf("introduzca un sufijo cualquiera: "); //se considera que el usuario sabe lo que es un sufijo, e introduce uno cualquiera
	gets(t);	
	k=cadenaSufijo(s,t);
	printf("%d",k);
	return 0;
}
