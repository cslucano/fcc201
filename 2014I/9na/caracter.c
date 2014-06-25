#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'a';
    printf("%c\n", c);
    printf("%c\n", c+1);
    printf("%d\n", c);

    printf("%c-%c : %d-%d\n", 'a', 'z', 'a','z');
    printf("%c-%c : %d-%d\n", 'A', 'Z', 'A','Z');

    printf("%c->%c\n", 'a', 'a'-'a'+'A');
    printf("%c->%c\n", 'b', 'b'-'a'+'A');


    return 0;
}

