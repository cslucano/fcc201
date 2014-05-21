#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float practica1[100];
    float practica2[100];
    float promedio_alumnos[100];

    int num_alumnos;
    float promedio;

    scanf("%d", &num_alumnos);

    int indice;
    for(indice=0; indice < num_alumnos; indice++) 
    {
        scanf("%f %f", &practica1[indice], &practica2[indice]);
        promedio_alumnos[indice] = (practica1[indice] + practica2[indice])/2;
    }


    for(indice=0; indice < num_alumnos; indice++) 
    {
        printf("alumno %d  %.2f %.2f %.2f\n", indice + 1,  practica1[indice],  practica2[indice],  promedio_alumnos[indice] );
    }

    return 0;
}
