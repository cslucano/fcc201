#include <stdio.h>
#include <stdlib.h>

void init(int m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_x; j++)
        {
            m[i][j] = random()%10;
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


void multiplica(int m[100][100], int dim_x_m, int dim_y_m, int n[100][100], int dim_x_n, int dim_y_n, int o[100][100], int * dim_x_o, int * dim_y_o)
{
    int i,j;
    for(i = 0; i < dim_x_m; i++)
    {
        for(j = 0; j < dim_y_n; j++)
        {   
            int acum = 0;
            int r;

            for(r=0;r<dim_y_m;r++) {
                acum += m[i][r]*n[r][j];
            }

            o[i][j] = acum;
        }
    }
    *dim_x_o = dim_x_m;
    *dim_y_o = dim_y_n;
}

int main()
{
    int x[100][100];
    int y[100][100];
    int z[100][100];


    int dim_x;
    int dim_y;

    init(x, 2, 2);
    imprimir(x, 2, 2);

    printf("\n");

    init(y, 2, 2);
    imprimir(y, 2, 2);

    printf("\n");

    int filas_z;
    int columnas_z;
    multiplica(x, 2, 2, y, 2, 2, z, &filas_z, &columnas_z);
    imprimir(z, filas_z, columnas_z);

    return 0;
}
