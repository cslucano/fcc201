#include <stdio.h>
#include <stdlib.h>

void init(int m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_x; j++)
        {
            m[i][j] = random()%1000;
        }
    }
}

void imprimir(int m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_x; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void suma(int m[100][100], int n[100][100], int o[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_x; j++)
        {
            o[i][j] = m[i][j] + n[i][j];
        }
    }
}

int main()
{
    int x[100][100];
    int y[100][100];
    int z[100][100];


    int dim_x;
    int dim_y;

    init(x, 4, 4);
    imprimir(x, 4, 4);

    printf("\n");

    init(y, 4, 4);
    imprimir(y, 4, 4);

    printf("\n");

    suma(x, y, z, 4, 4);
    imprimir(z, 4, 4);

    return 0;
}
