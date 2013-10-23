#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int contenedor[100];
	int n;
	
	scanf("%d",&n);
	int i = 0;

	while( i < n )
	{
		scanf("%d", contenedor + i);
		i = i + 1;
	}

	int suma = 0;
	i = 0;
	while( i < n )
	{
		suma = suma + *(contenedor+i);
		i = i + 1;
	}

	float promedio;
	promedio = (float)suma / n;

	printf("%f\n", promedio);

	return 0;
}
