#include <stdio.h>
#include <stdlib.h>

void mergesort(int A[], int ini, int fin)
{
  if(ini >= fin)
    return;
  int mid = (fin+ini)/2;
  mergesort(A, ini, mid);
  mergesort(A, mid+1,fin);

  int B[mid-ini+1];
  int C[fin-mid];
  for(int i=ini;i<=mid;i++)
    B[i-ini]=A[i];
  for(int i=mid+1;i<=fin;i++)
    C[i-mid-1]=A[i];

  int i=0,j=0,n1=mid-ini+1,n2=fin-mid;
  while(i<n1 and j<n2)
  {
    if(B[i]<=C[j])
      A[ini+i+j]=B[i++];
    else
      A[ini+i+j]=C[j++];
  }
  while(i<n1)
    A[ini+i+j]=B[i++];
  while(j<n2)
    A[ini+i+j]=C[j++];
}

int main()
{

    int num=100000;
    int arreglo[100000];

    int i;
    for (i=0; i<num; i++)
    {
        arreglo[i] = random();
    }

    mergesort(arreglo, 0, num-1);

    return 0;
}




