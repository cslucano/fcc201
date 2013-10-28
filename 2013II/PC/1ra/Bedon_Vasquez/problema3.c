#include<stdio.h>
#include<conio.h>
int main()
{
  int mes,anio;  
    printf("introduzca el numero del mes :");
    scanf("%d",&mes);
    printf("introduzca el numero del anio :");
    scanf("%d",&anio);    
    if(mes==2)
   {
    if(anio%400==0)           
    printf("el mes tiene 29 dias \n");
    else if(anio%100==0)
    printf("el mes tiene 28 dias \n");
    else 
    printf("el mes tiene 28 dias \n");
    }
    else
    
  {  if((mes==4)||(mes==6)||(mes==9)||(mes==11))
    printf("el mes tiene 30 dias \n");
    else 
    printf("el mes tiene 31 dias \n");
} 
getch();
return 0;    
    }
