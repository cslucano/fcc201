#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_dec;
    num_dec = 35;

    int a0 = 0;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;

    a0 = num_dec%2; 

    num_dec = num_dec/2;
	a1 = num_dec%2; 

    num_dec = num_dec/2;
	a2 = num_dec%2; 

    num_dec = num_dec/2;
	a3 = num_dec%2; 

    num_dec = num_dec/2;
	a4 = num_dec%2; 

    num_dec = num_dec/2;
	a5 = num_dec%2; 

    num_dec = num_dec/2;
	a6 = num_dec; 

    printf("%d%d%d%d%d%d%d(2)\n", a6, a5, a4, a3, a2, a1, a0);

    return 0;
}
