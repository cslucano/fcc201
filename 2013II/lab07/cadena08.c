#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cadena1[] = "a";
	char cadena2[] = "b";
	
	if(strcmp(cadena1, cadena2)<0)
	{
		printf("%s %s\n", cadena1, cadena2);
	}
	else
	{
		printf("%s %s\n", cadena2, cadena1);
	}

	return 0;
}
