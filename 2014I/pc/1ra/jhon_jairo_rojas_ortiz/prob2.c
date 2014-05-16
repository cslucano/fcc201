#include<stdio.h>
int main (void)
{
int i=1,j=1;
for(i=1;i<=7;i++){
     for(j=1;j<=7;j++)
        if(j<=i)
             printf("*");
        else
             printf("o");
printf("\n");}
return 0;
}
