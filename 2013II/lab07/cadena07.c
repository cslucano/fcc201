#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char universidad[] = "universidad";
	char nacional[] = "nacional";
	char de[] = "de";
	char ingenieria[] = "ingenieria";
	char UNI[1024]="";
	
	strcat(UNI, universidad);
	strcat(UNI, " ");
	strcat(UNI, nacional);
	strcat(UNI, " ");
	strcat(UNI, de);
	strcat(UNI, " ");
	strcat(UNI, ingenieria);	
	fflush(stdout);

	printf("%s\n", UNI);
	return 0;
}
