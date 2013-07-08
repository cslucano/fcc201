#include<stdio.h>
#include<stdlib.h>
#define TAM 40
#define MAXCAR 9
void ordena_baraja(Baraja b, int ncartas)
{
  int i,j,aux;
  
for(i=0;i<ncartas-1;i++)
{
for(j=0;j<ncartas-1;j++)
{
if(b[j].valor>b[j+1].valor)
{
aux=b[j].valor;
b[j].valor=b[j+1].valor;
b[j+1].valor=aux;
}
}
}
  
  for(i=0;i<ncartas;i++)
    {
      printf("%c",b[i].valor);
     }

}

 int main() {
 int n,i;
typedef char cadena[MAXCAR+1];
typedef struct Carta
{
    cadena palo;
    int valor;
} TCarta;

TCarta Baraja[TAM];
 puts("Ingrese el numero de cartas:");
 scanf("%d",&n);

 for(i=0;i<n;i++) {
 printf("palo: ");  scanf("%s",Baraja[i].palo);
 printf("valor: ");  scanf("%d",&Baraja[i].valor);
  }

 ordena_baraja(Baraja,n);
 return 0;
}
