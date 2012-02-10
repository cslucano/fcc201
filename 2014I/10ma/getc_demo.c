#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c = getchar() ;

    while(c != EOF)
    {
       putchar(c);
       c = getchar();
       //printf("%c", c);
    }

    return 0;
}
