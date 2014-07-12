#include<stdio.h>

void copiarcadena(char* s,char* t){
 while(*s++ = *t++);    
}


int main()
{
char str1[] = "Introduccion a la";
char str2[] = "Programacion";

printf("Antes de copiar:\n");
printf("Cadena 1: %s\n", str1);
printf("Cadena 2: %s\n", str2);
copiarcadena(str1,str2);
printf("Despues de copiar:\n");
printf("Cadena 1: %s\n", str1);
printf("Cadena 2: %s\n", str2);
return 0;
}
