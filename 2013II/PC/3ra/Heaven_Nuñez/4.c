#include<stdio.h>
int eliminarDuplicados(int a[],int b[],int N);
int main()
{
 int N;
 printf("introdusca el numero de elementos del array:\n");
 scanf("%d",&N);
 
 int a[N],b[N],i;
 printf("introdusca ordenadamente los elementos del array:\n");
 for(i=0;i<N;i++)
   scanf("%d",&a[i]);
 eliminarDuplicados(a,b,N);
 return 0;
}
int eliminarDuplicados(int a[],int b[],int N)
{
 int i,x,m,h,j;
 for(i=0,x=0;i<N;i=i+m+1,x++)
  {

    b[x]=a[i];
 
    m=0;
    
    for(h=i+1;h<N;h++)
     {
       if(a[i]==a[h])
        {
          m++;
        }
     }
  }
  printf("el array modificado es:\n");
  for(j=0;j<(x);j++)  
     printf("%d",b[j]);
  printf("\n el array contiene %d elementos\n",x);
}













