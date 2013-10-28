#include <stdio.h>

int main()
{
 char ch1, ch2, ch3, ch4, ch5;
 
 printf("Ingrese la hora actual en notacion de 24 horas:\n");
 scanf("%c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);

  if (ch1<1)
  {
   printf("La hora actual es %c%c%c%c%c.\n", ch1, ch2, ch3, ch4, ch5);
  }
  else
  {
   if (ch1==1 && ch2<=2)
   {
    printf("La hora actual es %c%c%c%c%c.\n", ch1, ch2, ch3, ch4, ch5);
   }
   else
   {
    ch1 = ch1 - 1;
    ch2 = ch2 - 2;

    printf("La hora actual es %c%c%c%c%c.\n", ch1, ch2, ch3, ch4, ch5);
   }  
  }
 
 return 0;
}
