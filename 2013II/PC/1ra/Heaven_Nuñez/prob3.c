#include<stdio.h>

int main()
{
int anno,mes;
printf("introducir año y mes:\n");
scanf("%d%d",&anno,&mes);

if((anno%4==0 && anno%100!=0) || anno%400==0)
{ 
  switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("31 dias tiene el mes\n");break;
    
    case 2:printf("29 dias tiene el mes\n");break;

    case 4:
    case 6:
    case 9:
    case 11:printf("30 dias tiene el mes\n");break;
              }
}
else
{
  switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("31 dias tiene el mes\n");break;
    
    case 2:printf("28 dias tiene el mes\n");break;

    case 4:
    case 6:
    case 9:
    case 11:printf("30 dias tiene el mes\n");break;
              }
}
return 0;
}
