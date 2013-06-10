#include <stdlib.h>
#include <stdio.h>

int main()
{
  char minusculas[500] = "abcdefghijklmnopqrstuvwxyz";
  char mayusculas[500] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int indice;
  for(indice = 0; indice < 26; indice++)
  {
    printf("%d %d\n", minusculas[indice], mayusculas[indice]);
  }
}
