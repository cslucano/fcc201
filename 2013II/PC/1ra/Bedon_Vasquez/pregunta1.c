#include<stdio.h>
int main()
{
    int  h,m,n;
    printf("introduzca la hora en formnato de 24 horas : \n");
    printf("introduzca el horario :");
    scanf("%d",&h);
    printf("introduzca los minutos: ");
    scanf("%d",&m);
    printf("la hora es %d : %d \n",h,m);
if(((h>0)&&(h<25))&&((m>0)&&(m<61)))
 if((h>12)&&(h<25))
 {
  n=h-12;
 printf("la hora en formato de 12 horas es : %d : %d",n,m);
}
 else
 printf("la hora en formato de 12 horas es : %d : %d",h,m);
 
return 0;    
    }
