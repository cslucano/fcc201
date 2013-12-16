#include <stdio.h>
#include <string.h>

int main(void)
{
 char alfa[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

 char decod[27]= "JKLMNOPQRSTUVWXYZABCDEFGHI";

 char texto[105] ;

 int j;

 printf("Ingresar texto:\n");
 scanf("%s", texto);

 for(j=0;j<strlen(texto);j++)
    printf("%c", decod[texto[j]-'A']);

 printf("\n");
          
 return 0;
}
