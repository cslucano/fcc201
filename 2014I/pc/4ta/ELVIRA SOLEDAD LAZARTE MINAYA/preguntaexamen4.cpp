#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copiarcadena(char *s,char *t){
     while(*s){
             *t++=*s++;
              
             } 
              *t='\0';        
     }
int main(){
    char s[40];
     char t[40];
     int n;
     
    printf("ingresa la cadena\n");
    gets(s);
    copiarcadena(s,t);
    printf("la copia de %s es:   %s\n",s,t);
    system("pause");
    return 0;
    
    }
