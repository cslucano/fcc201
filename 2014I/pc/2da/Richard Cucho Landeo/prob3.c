#include<stdio.h> 
int main(){
    int i,j=1,k=1,n;
    printf("El triangulo de pascal para que valor?:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
         for(j=1;j<n-i;j++)
             printf("   ");
         for (k=0;k<=i;k++)
             printf("  %d  ",(pascal(i))/(pascal(k)*(pascal(i-k))));
             printf ("\n");
           }
    }
    int pascal(int num)
    {
      int i=num;
      int p=1;
      for(i=num;i>1;i--)
       {
           p*=i;
       }
       return p;
    }
     
