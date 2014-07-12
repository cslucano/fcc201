#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100 
int cadenaSufijo(char *s,char *t);

int main(){
	char s[N];
	char t[N];
	int y;
	do{
		printf("Introduce cadena s: ");
		scanf("%s",s);
		printf("Introduce cadena t: ");
		scanf("%s",t);	
		y=cadenaSufijo(s,t);
    	if(y)
	 		printf("la cadena t es sufijo de la cadena s %d\n",y);
		else
			printf("la cadena t no es sufijo de la cadena s %d\n",y);
	}while(s[N]!=EOF);	
	return 0;
}
int cadenaSufijo(char *s,char *t){
	int lon_s;
	int lon_t;
	int i,c=0;
   	
	lon_s=strlen(s);
   	lon_t=strlen(t);
   	for(i=0;s[(lon_s-1)-i]==t[(lon_t-1)-i] && i<lon_t;i++)
	{
   		c++;
   	}
   	if(c==lon_t)
   	   return 1;
   	else
	   return 0;   
}
