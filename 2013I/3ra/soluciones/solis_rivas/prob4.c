#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
 
   int pasc[10];
   int n=6;
   int x, i, j;
 
   x=0;
   for (i=1; i<=n ; i++)
   {
         for (j=x; j>=0; j--)
         {
             if(j==x || j==0)
             {
                  pasc[j] = 1;
             }
             else
             {
                  pasc[j] = pasc[j] + pasc[j-1];
             }
         }
 
        x++;
        printf("\n");

        for (j=1; j<=n-i; j++)
             printf("   ");
 
        for(j=0; j<x; j++)
        {
             printf("%3d   ", pasc[j]);
        }
   }
return 0;
}
