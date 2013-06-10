#include <stdlib.h>
#include <stdio.h>

int numerocaracteres(char cadena[])
{
  int contador = 0;
  while(cadena[contador] != '\0')
  {
    contador++;
  }
  return contador;
}

void explotarcadena(char cadena[])
{
  int indice = 0;
  int base = 0;
  char c_i = cadena[indice];
  char c_b = cadena[base];
  while(c_b != '\0')
  {
    c_i = cadena[indice];
    c_b = cadena[base];
    if((c_i == ' ' && c_b != ' ' ) || c_i == '\0')
    {
      while(base < indice)
      {
        printf("%c", cadena[base]);
        base++;
      }
      printf("\n");
      base = indice;
    }
    if(c_i != ' ' && c_b == ' ')
    {
      base = indice;
    }
    indice++;
  }
}

int main()
{
  char cadena[] = "Universidad Nacional de    Ingenieria";
  int indice=0;
  while(cadena[indice] != '\0')
  {
    if(cadena[indice]>='A' && cadena[indice] <= 'Z')
    {
      cadena[indice] = cadena[indice] - 'A' + 'a';
    }
    else if(cadena[indice]>='a' && cadena[indice] <= 'z')
    {
      cadena[indice] = cadena[indice] - 'a' + 'A';
    }
    printf("%c", cadena[indice]);
    indice++;
  }
  printf("\n");
  printf("número de carateres : %d\n", numerocaracteres(cadena));
  explotarcadena(cadena);
}
