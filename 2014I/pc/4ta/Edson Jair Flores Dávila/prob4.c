#include<stdio.h>
#include<stdlib.h>
void copiarcadena(char *p1 ,char *p2){
   int i;
   for(i=0;*(p1+i)!='\0';i++){
      *(p2+i)=*(p1+i);
   }
}
int main(){
   char v1[];
   char v2[];
   char *p1;
   char *p2;
   p1=&c1[0];
   p2=&c2[0];
   puts("ingrese la cadena:");
   gets(c1);
   copiarcadena(p1,p2);
   puts("la cadena copiada es:");
   puts(c2);
   return 0;
}
