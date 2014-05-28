#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    int arreglo[100000];

    int i;
    for (i=0; i<100000; i++)
    {
        arreglo[i] = random();
    }

    for (i=0; i<100000; i++)
    {
        printf("arreglo[%d] = %d\n", i, arreglo[i]);
    }

    return 0;
}
