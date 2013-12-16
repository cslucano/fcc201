#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int eliminaj(char cad[], int j) {
    char str1[500];
    int k,l;
    
    l=0;
    for(k=0; k<strlen(cad); k++) 
       if (k!=j) {
          str1[l] = cad[k];
          l++;
       }

    str1[strlen(cad)-1] = '\0';
    strcpy (cad,str1);
    return 0;
}

int main()
{
  char cadena1[500], cadena2[500], letra;
  int i,j,x;
  
  printf("Introduzca la primera cadena: ");
  scanf("%s",cadena1);
  
  printf("Introduzca la segunda cadena: ");
  scanf("%s",cadena2);
  
   
  if (strlen(cadena1) != strlen(cadena2)) 
     printf("Las cadenas introducidas no son anagramas\n");
  else 
  {
       for(i=0; i<strlen(cadena1); i++)
       {
           for (j=0; j < strlen(cadena2); j++) {
               if (cadena1[i] == cadena2[j]) {
                  eliminaj(cadena2,j);                  
                  break;
               }
           }
       }

       if(strlen(cadena2)==0) printf("Las cadenas introducidas son anagramas\n");
       else printf("Las cadenas introducidas no son anagramas\n");
  }
  return 0;
}
