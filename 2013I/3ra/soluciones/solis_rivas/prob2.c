#include <stdlib.h>
#include <stdio.h>

void leer(float A[5][5], int n, int n)
{
  int i, j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
}
int main() {
  int m;
  int n;
   float A[5][5];
  scanf("%d %d", &n, &n);

  int i;
  int j;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%f", &A[i][j]);
    }
   }
  printf("Escriba un valor X: ");
  scanf("%d",&m);
  leer(A, n, n);
  switch(m){
     case X:m: 
          printf("tercer espiral");
break;
     case X:m: 
          printf("segundo espiral");
break;
      case X:m: 
          printf("primer espiral");
break;
     case X:0: 
          printf("no existe");
break;
                  }; 
  return 0;
}
