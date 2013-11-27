#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char hola[] = "universidad";
	char mundo[1024] = "";
	char mundo2[1024] = "";
	
	strcpy(mundo, hola);
	strncpy(mundo2, hola, 3);

	printf("%s\n", mundo);
	printf("%s\n", mundo2);
	return 0;
}
