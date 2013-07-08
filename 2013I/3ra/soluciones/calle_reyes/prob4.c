#include<stdio.h>
#define N 100
int main(){
  int n,i,j;
  int pascal[N];
    printf("ingrese el numero n \n");
    scanf("%d",&n);
   for(i=0;i<=n;i++)
   { 
     for(j=0;j<=i;j++)
      { 
         pascal[i]=tripascal(i,j);
         printf(" %d ",pascal[i]);
      }
     printf("\n");
    }
   return 0;
   } 
int factorial(int n){
   int fact=1,i;
     for(i=1;i<=n;i++)
        fact*=i;
    return fact;
   }
int combinatoria(int n,int m)
  { 
    int k;
    k=(factorial(n)/(factorial(m)*factorial(n-m)));
     return k;
   }
int tripascal(int n,int m)
   {
       if((n==1 || n==0) && (m==1 || m==0))
         return 1;
      else
        return combinatoria(n-1,m-1)+combinatoria(n-1,m);
     }







          






  
