#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    int fila;
    int columna;

    // Rombo
    printf("Rombo\n");
    for(fila = 0; fila < 7; fila++)
    {
        for(columna = 0; columna < 7; columna++)
        {
            int x_p = columna-3;
            int y_p = fila-3;
            if ( 3-(abs(x_p)+abs(y_p)) >= 0) {
                printf("X");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    // Dos triangulos
    printf("\n");
    printf("Dos Triangulos\n");
    for(fila = 0; fila < 7; fila++)
    {
        for(columna = 0; columna < 7; columna++)
        {
            if (fila >= columna) {
                printf("X");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
