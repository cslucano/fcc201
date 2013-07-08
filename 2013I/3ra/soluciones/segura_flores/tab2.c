#include<stdio.h>






int main()
{
	int m;
	printf("ingrese el orden de la matriz cuadrada (impar):\n");
	scanf("%d",&m);
	int a[m][m];
	printf("ingrese la matriz:\n");

	int i,j;
	for(i=0;i<m;i++)
	 for(j=0;j<m;j++)
           scanf("%d",&a[i][j]);	   



	return 0;
}
