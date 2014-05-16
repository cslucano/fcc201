#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float termino_k(int k)
{
	float termino = (4*pow(-1, k))/(2*k+1);

	return termino;
}

int main()
{
	float termino = 0;
    int k = 0;
    float pi = 0;
    
    do {
        termino = termino_k(k);
        pi = pi + termino;         
		k = k + 1;
    	
        //termino = (termino<0) ? -termino : termino;
        //termino = (termino>=0) ? termino : -termino;
        termino = (termino>=0) ?: -termino;
        
    } while ( termino > 1e-6);
	printf("%.10f\n", pi);

	return 0;
}
