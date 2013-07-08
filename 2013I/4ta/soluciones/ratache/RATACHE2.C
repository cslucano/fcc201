#include<stdio.h>
#include<stdlib.h>
#define M 20
#define N 10
int longi(char a[]){
int l=0;
while(a[l]!='\0')
l++;
}

void copiar(char origen[],char resultado[],int inicio, int longitud)
{
int i;
for(i=0;inicio+i<(inicio+longitud);i++)
  resultado[i]=origen[inicio+i];
}

void borrar(char origen[],int inicio, int longitud){
int i,l=longi(origen);
for(i=0;i<(l-(inicio+longitud));i++)
  origen[inicio+i]=origen[inicio+longitud+i];
for(i=longi(origen);l>0;l--,i++)
  origen[i]='\0';
puts(origen);
}

void menu(char origen[],char resultado[]){
int n,inicio,longitud;
puts("Ingrese el inicio y la longitud\n");
scanf("%d %d",&inicio,&longitud);
puts("Menu\n[1]copiar\n[2]borrar\n");

scanf("%d",&n);
switch(n){
case 1:copiar(origen,resultado,inicio,longitud);puts(resultado);break;
case 2:borrar(origen,inicio,longitud);puts(origen);break;
default:break;
}

}

main(){
char origen[M],resultado[N];
printf("Escriba una frase:\n");
gets(origen);
menu(origen,resultado);
}
