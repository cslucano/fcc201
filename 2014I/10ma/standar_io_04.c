#include <stdio.h>
#include <stdlib.h>


int main()
{

    FILE *f_in = fopen("fiestas.txt", "ro");
    FILE *f_out = fopen("fiestas2.txt", "w");

    char cadena[20];

    while(fgets(cadena, 20, f_in)!= NULL)
    {
       fprintf(f_out, "%s", cadena);
    }
    
    fclose(f_in);
    fclose(f_out);
    return 0;
}
