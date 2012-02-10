#include <stdio.h>
#include <stdlib.h>


int main()
{
    //fprintf(stdout, "Hola Mundo\n");
    //fprintf(stderr, "Algo sucedio mal!!!\n");

    FILE *f = fopen("fiestas.txt", "ro");

    char c;
    c = fgetc(f);

    while(c != EOF)
    {
       putchar(c);
       c = fgetc(f);
    }
    
    
    fclose(f);
    return 0;
}
