#include<stdio.h>
#include<stdlib.h>


int main()
{   int x=100,i;
        for(i=100;i>0 && x>0;i--)
        { 
             x-=0.1*(2i-2*3.14);
        }
        printf("%d",x);   
     return 0;
}
