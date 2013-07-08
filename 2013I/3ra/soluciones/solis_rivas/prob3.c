#include <stdlib.h>
#include <stdio.h>

void leer(float A[20][20], int m, int n)
{
  int i, j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
}
int main(){
   float A[20][20];
   int m, n;
     scanf("%d %d", &m, &n);
   int i,j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%f", &A[i][j]);
     }
    }
  S[i][j]=0;
  for(j=0;j<n;j++){
    for(i=0;i<m;i++){
    S[i][j]= S[i][j]+A[i][j];
                    }
    scanf("%c",&S[i][j]);
    }
  leer(A, m, n);
  return 0;
}
