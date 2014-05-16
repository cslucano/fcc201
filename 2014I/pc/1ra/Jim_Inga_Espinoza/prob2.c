#include <stdio.h>
#define i 7
#define j 7

int main()
{
int i;
int j;
for (i=0;i<=4;i++)
{
for (j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
} 
