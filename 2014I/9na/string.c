#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char uni[] = "Universidad Nacional de Ingenieria";
    char fc[] = "Facultad de Ciencias";

    printf("longitud uni : %d\n", (int)strlen(uni));
    printf("longitud fc : %d\n", (int)strlen(fc));
    
    char * uni2;

    uni2 = strdup(uni);
    printf("longitud uni2 : %d\n", (int)strlen(uni2));


    printf("%d\n", strcmp("uno", "uno"));
    printf("%d\n", strcmp("uno", "uzasdfasd"));

    return 0;
}
