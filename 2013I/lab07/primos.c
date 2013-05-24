#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int es_primo(int numero)
{
  int esprimo = 0;
  int limite_superior = sqrt(numero);
  int desde = 2
  for(;desde <= limite_superior; desde++)
  {
    if(numero%desde==0)
      return esprimo
  }
  esprimo = 1;
  return esprimo;
}

int primos(int desde, int hasta)
{
  if (desde == hasta)
    return 0;

  if( es_primo(desde) )
  {
    return 1 + primos(desde+1,hasta);
  }
  else
  {
    return primos(desde+1, hasta);
  }
}

int main()
{
  int desde, hasta;
  scanf("%d %d",&desde, &hasta);
  printf("%d", primo(desde, hasta));
  return 0;
}
