#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(float m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_y; j++)
        {
            m[i][j] = random()%10;
        }
    }
}

void imprimir(float m[100][100], int dim_x, int dim_y)
{
    int i,j;
    for(i = 0; i < dim_x; i++)
    {
        for(j = 0; j < dim_y; j++)
        {
            printf("%.0f ", m[i][j]);
        }
        printf("\n");
    }
}

void multiplica(float m[100][100], int dim_x_m, int dim_y_m,float n[100][100], int dim_x_n, int dim_y_n, float o[100][100], int * dim_x_o, int * dim_y_o)
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

void rotac(float b[100][100],float q)
{
   float y,z;
   y=cos(q);
   z=sin(q);
   b[0][0] = y;
   b[0][1] = z;
   b[1][0] =-z;
   b[1][1] = y;

}

int main()
{
    float x[100][100];
    float y[100][100];
    float b[100][100];
    int p;
    float q;
    int filas_y;
    int columnas_y;
    
    printf("\t\tMatriz inicial\n");
    init(x, 10, 2);
    imprimir(x, 10, 2);
    

    printf("<<<angulo esta en radianes>>>\n");
    printf("<<<pruebe con angulos conocidos multiplos de 3.14159>>>\n");
    printf("<<<ejemplo 0 , 1.5707 , 3.14159 , 6.28318\n");
    printf("angulo a rotar : ");
    scanf("%f",&q); 
    
    printf("\t\tMatriz de transformacion\n");
    rotac(b,q);
    imprimir(b,2,2);
    printf("\n");
    
    printf("\t\tMatriz rotada\n");
    multiplica(x,10,2,b,2,2,y,&filas_y,&columnas_y);
    imprimir(y,filas_y,columnas_y);

    return 0;
}
