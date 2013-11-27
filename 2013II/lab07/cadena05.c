#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char UNI[] = "Universidad Nacional de Ingenieria";

	int i;
	for(i=0; i<strlen(UNI);i++)
	{	
		if(UNI[i]>='a' || UNI<='z')
		{
			printf("%c", UNI[i]-'a'+'A');
		}
		else if(UNI[i]>='A' || UNI<='Z')
		{
			printf("%c", UNI[i]-'A'+'a');
		}
		else
		{	
			printf("%c", UNI[i]);
		}	
	}
	printf("\n");

	printf("%s\n", UNI);
	return 0;
}
