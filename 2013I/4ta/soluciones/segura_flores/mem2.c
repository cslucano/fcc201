#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 40

void copiar(char origen[TAM],int inicio,int longitud);
void borrar(char origen[TAM],int inicio,int longitud);

int main()

{

  int inicio,longitud;
  char opc;
  char origen[TAM];
  

  printf("Ingrese frase: ");
  gets(origen);
  puts("\n\tMENU:\n");
  puts("(1)Copiar");
  puts("(2)Borrar");

  printf("ingrese opcion: ");
  scanf("%c",&opc);

  do{

  switch(opc)

  {
    case '1': 
     printf("ingrese inicio y longitud: ");
     scanf("%d%d",&inicio,&longitud);
     copiar(origen,inicio,longitud);
    break;
    case '2': borrar(origen,inicio,longitud);
    break;
    default : printf("ingrese opcion del menu:\n");
  }

    }while(opc!=1 || opc!=2);

  return 0;

}

void copiar(char origen[TAM],int inicio,int longitud)

{
  int i,n;
  n=longitud-inicio+1;
  char resultado[n];

  for(i=inicio;i<inicio+longitud;i++)
  {
   resultado[i]=origen[i];
   printf("%s",origen[i]);
  }
}

void borrar(char origen[TAM],int inicio,int longitud)

{

  int i,n;
  n=longitud-inicio+1;
  char resultado[n];

  for(i=inicio,j=0;i<inicio+longitud,j<n;i++,j++)
  {
    if(j!=i)
     {
      resultado[j]=origen[j];
      printf("%s",origen[j]);
     }
  }

}










