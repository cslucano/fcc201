#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pi;
    float termino_n;
    int n;
    
    pi = 0;
    n = 0;

    do {
        termino_n = (2*pow(-1,n)*pow(3,0.5-n))/(2*n+1);
        pi += termino_n;
        n++;
    } while(fabs(termino_n) > 1e-5);

    printf("el valor de pi es: %.6f", pi);

    return 0;
}
