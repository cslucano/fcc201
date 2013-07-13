#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int cuantos;
    int cuenta;
    int total;
    int Contador=0;
    int espacios=0;
    char Caracteres[3];
 
    Caracteres[0]='*';
    Caracteres[1]='*';
    Caracteres[2]='*';
    Contador=0;
 
    printf("Longitud: ");
    scanf(" %d",&cuantos);
 
    Contador=0;
    for(cuenta=1;cuenta<=cuantos;cuenta++) {
      if(Contador>2) Contador=0;
      espacios=cuantos-cuenta+1;
      printf("%*c",espacios,Caracteres[Contador]);
      for(total=2;total<cuenta*2;total++) printf("%c",Caracteres[Contador]);
      Contador++;
      printf("\n");
    }
    Contador++;
    for(cuenta=cuantos-1;cuenta>0;cuenta--) {
      if(Contador>2) Contador=0;
      espacios=cuantos-cuenta+1;
      printf("%*c",espacios,Caracteres[Contador]);
      for(total=2;total<cuenta*2;total++) printf("%c",Caracteres[Contador]);
      Contador++;
      printf("\n");
    }
  sistema("PAUSE");
  return 0;
}
