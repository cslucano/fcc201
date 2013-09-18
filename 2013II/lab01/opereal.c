#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x;
    float y;
    float z;
    int n;
    x = 1.55;
    y = 9;
    n = 3;
    z = x * y;
    printf("%g * %g = %g\n", x, y, z);
    z = x / y;
    printf("%g / %g = %g\n", x, y, z);
    z = sin(x);
    printf("sin(%g) = %g\n", x, z);
    z = exp(x);
    printf("e^%g = %g\n", x, z);
    z = sqrt(y);
    printf("raiz cuadrada de %g = %g\n", y, z);
    z = pow(y,n);
    printf("%g^%d = %g\n", y, n, z);

    return 0;
}
