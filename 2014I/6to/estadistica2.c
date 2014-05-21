#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float practica1[100];
    float practica2[100];
    float promedio[100];

    int num_alumnos = 5;

    practica1[0]=12;
    practica1[1]=15;
    practica1[2]=11;
    practica1[3]=17;
    practica1[4]=13;

    int indice;
    for(indice=0; indice < num_alumnos; indice++) 
    {
        printf("primera practica alumno %d es %.2f\n", indice + 1,  practica1[indice] );
    }
    printf("\n\n");

    printf("primera practica alumno 1 es %.2f\n", practica1[0] );
    printf("primera practica alumno 2 es %.2f\n", practica1[1] );
    printf("primera practica alumno 3 es %.2f\n", practica1[2] );
    printf("primera practica alumno 4 es %.2f\n", practica1[3] );
    printf("primera practica alumno 5 es %.2f\n", practica1[4] );

    return 0;
}
