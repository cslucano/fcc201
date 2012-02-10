#include <stdio.h>
#include <stdlib.h>


int main()
{

    FILE *f_in = fopen("logo.png", "rb");
    FILE *f_out = fopen("logo2.png", "wb");

    char c;
    c = fgetc(f_in);

    while(c != EOF)
    {
       fprintf(f_out, "%c", c);
       c = fgetc(f_in);
    }
    
    fclose(f_in);
    fclose(f_out);
    return 0;
}
