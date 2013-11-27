#include <stdio.h>

int main(void)
{
 int i, j;
 int A[1000000];

 for(i=0; i<1000000; i++)
     scanf("%d", &A[i]);

 for(i=0; i<=1000000-1; i++)
    {
     for(j=0; j<=1000000-1; j++)
       {
        if (A[i]==j+1);    
       }
     }

 return 0;
}    

