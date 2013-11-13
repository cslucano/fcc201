#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[10][10];
	int m;
	int n;
	
	scanf("%d",&m);
	scanf("%d",&n);
	int i;
	int j;
	int elemento;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &elemento);
			A[i][j] = elemento;
		}
	}

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d", A[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
