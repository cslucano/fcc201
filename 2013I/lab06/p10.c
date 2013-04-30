#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float real(float x, float y)
{
    return x;
}

float imaginario(float x, float y)
{
    return y;
}

float modulo(float x, float y)
{
    return sqrt(x*x + y*y);
}

void suma(float x, float y, float x1, float y1, float* x2, float* y2)
{
    *x2 = x + x1;
    *y2 = y + y1;
    return;
}


int main()
{
    // Declaramos x, y floats
    float x0, y0;
    float x1, y1;
    float x2, y2;
    x0 =  1;
    y0 =  2;
    x1 =  3;
    y1 =  4;
    x2 =  0;
    y2 =  0;

    printf("componente real de %.2f + %.2fi : %.2f\n", x0, y0, real(x0,y0) );
    printf("componente imaginario de %.2f + %.2fi : %.2f\n", x0, y0, imaginario(x0,y0) );
    printf("modulo de %.2f + %.2fi : %.2f\n", x0, y0, modulo(x0,y0) );

    suma(x0, y0, x1, y1, &x2, &y2);

    printf("%.2f + %.2fi\n%.2f + %.2fi \n%.2f + %.2fi\n", x0, y0, x1, y1, x2, y2);


    return 0;
}
