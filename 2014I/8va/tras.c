#include <stdio.h>
#include <stdlib.h>

void init(int m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_x; j++)
        {
            m[i][j] = random()%50;
        }
    }
}

void imprimir(int m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_y; j++)
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

void unos(int m[100][100], int filas, int columnas)
{
    int i,j;
    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            m[i][j] = 1;
        }
    }
}

void traslacion(int m[100][100], int n[100][100], int filas, int delta_x, int delta_y) 
{
   int a[100][100];
   int b[100][100];
   int c[100][100];

   unos(a, filas, 1);

   b[0][0] = delta_x;
   b[0][1] = delta_y;
   int filas_c;
   int columnas_c;
   multiplica(a, filas, 1, b, 1, 2, c, &filas_c, &columnas_c);
   suma(m,c,n, filas, 2);

}

int main()
{
    int x[100][100];
    int y[100][100];


    int dim_x;
    int dim_y;

    init(x, 50, 2);
    imprimir(x, 50, 2);

    printf("\n");

    traslacion(x, y, 50, 10, 20);
    imprimir(y, 50, 2);

    return 0;
}
