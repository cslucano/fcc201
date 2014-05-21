#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float practica[100];

    int num_alumnos;
    float promedio;

    scanf("%d", &num_alumnos);


    int indice;
    for(indice=0; indice < num_alumnos; indice++) 
    {
        scanf("%f", &practica[indice]);
    }


    for(indice=0; indice < num_alumnos; indice++) 
    {
        printf("primera practica alumno %d es %.2f\n", indice + 1,  practica[indice] );
    }

    promedio = 0;
    for(indice=0; indice < num_alumnos; indice++) 
    {
        promedio += practica[indice];
    }

    promedio = promedio/num_alumnos;
    printf("promedio de notas primera practica %.2f\n", promedio );


    return 0;
}
