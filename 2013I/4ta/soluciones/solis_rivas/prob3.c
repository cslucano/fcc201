#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 80
int main() {
  char cad[N+1];
  char cad1[N+1];
  char cad2[N+1];
  char* ptr;
  char* ptr1;
  char* ptr2;
  int i,j,m,n,p;
  printf("Ingrese nombre");
  gets(cad);
  printf("Ingrese 1er apellido");
  gets(cad1);
  printf("Ingrese 2do apellido");
  gets(cad2);
  n=strlen(cad);
  m=strlen(cad);
  p=strlen(cad);
//  ptr= malloc(n*sizeof(char));
//  ptr1= malloc(m*sizeof(char));
//  ptr2= malloc(p*sizeof(char));
//  strcpy(ptr,cad);
//  strcpy(ptr1,cad1);
//  strcpy(ptr2,cad2);

  ptr = cad;
  ptr1 = cad1;
  ptr2 = cad2;
i=0;
  while( *(ptr+i)!='\0') {
     while(i<3) {
         printf("%c",*(ptr+i));
   i++;
    }
   i++;
    }
i=0;
   while( *(ptr1+i)!='\0') {
     while(i<3) {
         printf("%c",*(ptr1+i));
   i++;
    }
   i++;
    }
i=0;
   while( *(ptr2+i)!='\0') {
     while(i<3) {
         printf("%c",*(ptr2+i));
   i++;
    }
   i++;
   }
//  free(cad);
//  free(cad1);
//  free(cad2);

  
return 0;
}
