#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x;
	x = 0.7;

	int n;
    n = 0;

	float y = 0;
	float termino_n;

	termino_n = (pow(-1, n)/(2*n+1))*pow(x, 2*n+1);
	y = y + termino_n;
    n = n + 1;

	while (termino_n > 1e-9) {
		termino_n = (pow(-1, n)/(2*n+1))*pow(x, 2*n+1);
		y = y + termino_n;
        n = n + 1;
	}

	printf("%.10f\n", y);

	return 0;
}
