#include<stdio.h>

void multiplicacion(int A[100][100],int B[100][100],int C[100][100],int f_a,int f_b,int c_a,int c_b)
{

  int i,j,k;
  int suma=0;
    for(i=0;i<f_a;i++){
      for(j=0;j<c_b;j++){
        for(k=0;k<c_a;k++){
          suma+=A[i][k]*B[k][j];
	  printf("%d",suma);
	}
  }
   printf("\n");
   }
}





int main()
{
	
	int m,n,i,j,k;
	printf("ingrese la fila y columna: \n");
	scanf("%d %d",&m,&n);
	int a[m][n];
	int b[1][m];
	for(k=0;k<m;k++)
	  b[1][k]=1;
	int c[m];
	printf("ingrese la matriz:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}

	
 	multiplicacion(b,a,c,1,m,m,n);

	return 0;
}
