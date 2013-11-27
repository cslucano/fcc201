#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char minusculas[] = "abyz";
	char mayusculas[] = "ABYZ";

	printf("%s\n", minusculas);
	printf("%s\n", mayusculas);
	
	int i;
	for(i=0; minusculas[i] != '\0';i++)
	{	
		printf(
			"%c %d %c %d", 
			minusculas[i], 
			minusculas[i], 
			mayusculas[i], 
			mayusculas[i]	
		);
		printf("\n");
	}
	printf("\n");

	return 0;
}
