#include <stdio.h>
#include <stdlib.h>

void imprimir(int M[10][10], int m, int n)
{
	int i;
	int j;

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}	
}

int main()
{
	int A[10][10];
	int B[10][10];
	int C[10][10];

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
			scanf("%d", &elemento);
			B[i][j] = elemento;
		}
	}

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	imprimir(A, m, n);
	imprimir(B, m, n);
	imprimir(C, m, n);
/*
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}


	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
*/
	
	return 0;
}
