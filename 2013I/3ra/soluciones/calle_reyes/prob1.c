#include<stdio.h>
#define N 20
int main(){
   int v1[N],v2[N],i,j,k;
    printf("escribir los numeros en el arreglo\n");
    for(i=0;i<N;i++)
      {
        scanf("%d\n",&v1[i]);
      }
    for(j=0;j<N;j++)
     {    
        for(k=0;k<N;k++)
          if(v1[j] != v1[k+1])
                v2[k]=v1[j];
          else 
                v1[j++];
     }
  return 0;
}





