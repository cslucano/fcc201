#include<stdio.h>
#include<stdlib.h>
#define TAM 30
#define N 9

void codigo(char nombre_completo[],char aux[]){
int i,x,y,j;
for(i=0;nombre_completo[i]!=' ';i++)
  x=i;
for(i+=2;nombre_completo[i]!=' '&&i<TAM;i++)
  y=i;
for(i=0;i<3;x++,i++)
  aux[i]=nombre_completo[x+2];
for(;i<6;y++,i++)
  aux[i]=nombre_completo[y+2];
for(j=0;j<3;i++,j++)
  aux[i]=nombre_completo[j];
}

int main(void){
char nombre_completo[TAM], A[N+1];
int i;
for(i=0;i<TAM;i++)
  nombre_completo[i]='\0';
for(i=0;i<N;i++)
  A[i]='\0';
gets(nombre_completo);
codigo(nombre_completo,A);
puts(A);
return 0;
}
