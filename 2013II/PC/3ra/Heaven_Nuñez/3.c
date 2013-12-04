#include<stdio.h>
int suma(int a[],int N);
int main()
{
 int N;
 printf("introdusca el numero de elementos del array:\n");
 scanf("%d",&N);
 
 int a[N],i;
 printf("introdusca los elementos del array:\n");
 for(i=0;i<N;i++)
   scanf("%d",&a[i]);
 printf("la suma es %d:\n",suma(a,N));
 return 0;
}
int suma(int a[],int N)
{
 int i,x,aux,suma=0,h;
 for(i=0;i<N;i++)
   for(x=i+1;x<N;x++)
     {
       if(a[i]<a[x])
        {
          aux=a[x];
          a[x]=a[i];
          a[i]=aux;
        }
     }
 for(h=0;h<2;h++)
  suma=suma+a[h];
 return suma;
}

