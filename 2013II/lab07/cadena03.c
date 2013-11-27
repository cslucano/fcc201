#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char hola[] = "universidad nacional de ingenieria";
	char mundo[1024] = "mundo";

	int lh = strlen(mundo);
	
	int i;
	for(i=0; mundo[i] != '\0';i++)
	{	
		printf("%c", mundo[lh-i-1]);
	}
	printf("\n");

	printf("%s\n", mundo);
	return 0;
}
