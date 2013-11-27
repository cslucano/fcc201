#include <stdio.h>
#include <stdlib.h>

int longitud(char cadena[])
{
	int i = 0;
	while(cadena[i]!= '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char hola[] = "hola";
	char mundo[1024] = "mundo";

	printf("longitud: %d\n", longitud(hola));
	
	int i;
	for(i=0;hola[i] != '\0';i++)
	{	
		printf("%c", hola[i]);
	}
	printf("\n");

	printf("%s\n", mundo);
	return 0;
}
