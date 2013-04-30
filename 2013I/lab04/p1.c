#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ano, mes, dia;
  int suma;
  int i;
  int n;

  scanf("%d", &n);

  i = 0;

  for( ; ; )
  {
    scanf("%d %d %d", &ano, &mes, &dia);
    suma = ano + mes + dia;
  
    if( mes < 1 || mes > 12 )
    {
      printf("mes no permitido\n");
    }
    if( dia < 1 || dia > 31 )
    {
      printf("dia no permitido\n");
    }
  
    //sumamos dígitos de suma
    int miles, cientos, decenas, unidades;
    miles = suma/1000;
    cientos = (suma/100)%10;
    decenas = (suma/10)%10;
    unidades = (suma%10);
  
    int tmp, tarot;
    tmp = miles + cientos + decenas + unidades;
    tarot = tmp/10 + tmp%10;
  
    printf("%d\n", tarot);
    i++;
  }

  return 0;

}
