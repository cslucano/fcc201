#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
 //strcmp(a==b)
//comp=strcmp(a,b);
//int comp;
//printf(" comparacion= %d\n",comp);
// printf("si lo anterior resulta cero entonces son palabas anagramas\n");

int main(void){
char palabra1[24],palabra2[24];
int largo1,largo2,comp;

printf("escriba su palabra en mayuscula:");
gets(palabra1);
printf("escriba su palabra en mayuscula:");
gets(palabra2);
largo1=strlen(palabra1);
largo2=strlen(palabra2);
comp=strcmp(palabra1,palabra2);
printf("comparacion1:%d\n",comp);
if(comp<24){
comp=0;
printf("hay posibilidad que sean anagramas\n");
}
else {
printf("no son palabras anagramas\n");
}


return 0 ;
}
