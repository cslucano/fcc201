#include <stdlib.h>
#include <stdio.h>

void imprimir(float A[100][100], int filas, int columnas)
{
  int i, j;
  for(i=0;i<filas;i++){
    for(j=0;j<columnas;j++){
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
}

void imprimir_p(float A[100][100], int filas, int columnas)
{
  int i, j;
  for(i=0;i<filas;i++){
    for(j=0;j<columnas;j++){
      printf("%.2f ", *(*(A+i)+j));
    }
    printf("\n");
  }
}

void transpuesta(float A[100][100], int filas, int columnas)
{
  int i, j;
  for(j=0;j<columnas;j++){
    for(i=0;i<filas;i++){
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
}

void transpuesta_2(float src[100][100], float dst[100][100],int filas, int columnas)
{
  int i, j;
  for(i=0;i<filas;i++){
    for(j=0;j<columnas;j++){
      dst[j][i] = src[i][j];
    }
  }
}

void multiplicacion(float A[100][100], float B[100][100], float C[100][100], int f_a, int f_b, int c_a, int c_b)
{
  int i, j, k;
  float suma = 0;
  for(i=0;i<f_a;i++){
    for(j=0;j<c_b;j++){
      suma = 0;
      for(k=0;k<c_a;k++){
        suma += A[i][k]*B[k][j];
      }
      C[i][j] = suma;
    }
  }
}


int main()
{
  float A[100][100];
  float B[100][100];
  float C[100][100];
  int f_a, c_a;
  int f_b, c_b;
  int i;
  int j; 

  scanf("%d %d", &f_a, &c_a);
  for(i=0;i<f_a;i++){
    for(j=0;j<c_a;j++){
      scanf("%f", &A[i][j]);
    }
  }

  scanf("%d %d", &f_b, &c_b);
  for(i=0;i<f_b;i++){
    for(j=0;j<c_b;j++){
      scanf("%f", &B[i][j]);
    }
  }

  //printf("%.2f \n\n", *((*A)+1));
  
  imprimir(A, f_a, c_a);
  imprimir(B, f_b, c_b);
  //transpuesta(A, filas, columnas);
  //imprimir_p(A, filas, columnas);
  //transpuesta_2(A, B, filas, columnas);
  //
  multiplicacion(A, B, C, f_a, f_b, c_a, f_b);
  imprimir(C, f_a, c_b);

  return 0;
}
