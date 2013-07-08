#include<stdio.h>
#define TAM 40
#define MAXCAR 9

typedef char Cadena[MAXCAR +1];
typedef struct

{

   Cadena palo;
   int valor;

}Carta;

typedef Carta Baraja[TAM];

void ordena_baraja (Baraja b, int ncartas);

int main()

{

  int i,nro;
  printf("ingrese el numero de cartas: ");
  scanf("%d",&nro);

  printf("ingrese las cartas: \n");
  
  for(i=0;i<nro;i++)
   {
    scanf("%s\n",Carta.palo); 
    do{
    scanf("%d\n",Carta.valor);
    }while(valor<1 || valor>12);
    ordena_baraja(Carta.palo,Carta.valor);
   }

  return 0;

}

void ordena_baraja (Baraja b, int ncartas)

{





}

