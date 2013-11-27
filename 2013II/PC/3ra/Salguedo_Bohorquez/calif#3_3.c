#include <stdio.h>

int sumadedosmasgrandes(int C[], int n);

int main(void)
{

 int  i, n, S;

 printf("Ingresar la dimension de la matriz:\n");
 scanf("%d", &n);

 int C[100];

 printf("Ingresar los elementos de la matriz:\n");

 for(i=0; i<n; i++)
     scanf("%d ", &C[i]);

 S = sumadedosmasgrandes(C, n);

 printf("La suma es %d.\n", S);

 return 0;
}

int sumadedosmasgrandes(int C[], int n)
{ 
 int i, j, mayor1, mayor2, m;

 mayor1 = C[0];

 for(i=1; i<n; i++)
    {
     if (mayor1 < C[i])
        {
          mayor1 = C[i];
          m = i;
        }
    }
 
 

 mayor2 = C[0];
 
 for(j=1; j<n ; j++)
    {
     if (mayor2 < C[j] && j!=m)
       
        mayor2 = C[j];
    }

 return (mayor1 + mayor2);
}

