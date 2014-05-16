#include<stdio.h>
int main (void)
{
int i=1,j=1;
for(i=1;i<=4;i++){
     for(j=1;j<=7;j++)
        if(5-i<=j && j<=3+i)
             printf("*");
        else
             printf("o");
printf("\n");}
for(i=5;i<=7;i++){
     for(j=1;j<=7;j++)
        if(i-3<=j && j<=11-i)
             printf("*");
        else
             printf("o");
printf("\n");}
return 0;
}
