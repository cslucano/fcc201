#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 1e5;

	int A[100000];

	srand(time(NULL));

	int i;

	for(i = 0; i < n; i++)
	{
		A[i] = rand()%10000;
		//printf("%d %d %d\n", n, i, A[i]);
	}
	printf("==================================\n");
	int j, k, tmp;
	for( j = 0 ; j < n - 1; j++)
	{	
		for( k = j + 1 ; k < n; k++)
		{	
			if(A[j] > A[k])
			{
				tmp = A[j];
				A[j] = A[k];
				A[k] = tmp;
			}
		}
	}

	for(i = 0; i < n; i++)
	{
		printf("%d\n", A[i]);
	}   

	return 0;
}
