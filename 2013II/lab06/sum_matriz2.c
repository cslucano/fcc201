#include <stdio.h>
#include <stdlib.h>

void imprimir(int M[10][10], int m, int n)
{
	int i;
	int j;
	int *p = &M[0][0];	

	//for(i = 0; i < m; i++)
	//{
	//	for(j = 0; j < n; j++)
	//	{
	//		printf("%d ", M[i][j]);
	//	}
	//	printf("\n");
	//}	
	for(i = 0; i < m * n; i++)
	{
		if(i != 0 && i%n == 0)
		{
			printf("\n");
		}
		printf("%d ", *(p+(i/n)*10 + (i%n) ));
	}
}

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

	imprimir(A, m, n);
	
	return 0;
}
