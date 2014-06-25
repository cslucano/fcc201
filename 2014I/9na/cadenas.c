#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  char uni[] = "Universidad Nacional de Ingenieria";
  printf("%s\n", uni);

  char fc[100] = "Facultad de Ciencias";
  printf("%s\n", fc);

  int i;
  for(i=0;i<100;i++)
  {
    printf(" %c", fc[i]);
  }
  printf(".");
  printf("\n");

  i=0;
  while(uni[i] != '\0')
  {
      if(uni[i]>='a' && uni[i]<='z')
      {
          printf("%c", uni[i]-'a'+'A');
      }
      else if(uni[i]>='A' && uni[i]<='Z')
      {
          printf("%c", uni[i]-'A'+'a');
      }
      else
      {
          printf("%c", uni[i]);
      }
      i++;
  }
  printf("\n");

  return 0;
}
