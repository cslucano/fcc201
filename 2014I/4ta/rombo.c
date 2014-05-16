#include <stdio.h>
#include <stdlib.h>

void imprimirCaracter(int i, int j)
{
			if(j>=i) {
				printf("X");
			} else {
				printf("O");
			}
}

void imprimirRectangulo(int fila, int num_columnas)
{
	int i;
	
		for(i = 0; i<num_columnas; i++)
		{
			imprimirCaracter(i, fila);
		}
		printf("\n");
}

int main()
{
	int j;
	for(j= 0; j<7; j++)
	{
		imprimirRectangulo(j, 7);
	}

	return 0;
}
