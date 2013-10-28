#include<stdio.h>

int main()
{
int num,pri,ult;

printf("introducir numero\n");
scanf("%d",&num);

if(999<num)
{
pri=num/100;
ult=num%100;
if(50<ult)
   {
     pri=pri+1;
     printf("%d00",pri);
   }
else
     printf("%d00",pri);
}
else
    printf("escriba numero de 4 cifras");

return 0;
}
