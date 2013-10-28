#include<stdio.h>
int main()
{int a,d;
char c;
printf("Ingrese la hora en notacion de 24 horas:\n");
scanf("%d %c %d",&a,&c,&d);
if(a>12 && a<=19)
{a=a-12;
printf("La hora en notacion de 12 horas:\n");
printf("%d%c%d PM\n",a,c,d);
}
else if(a>19 && a<24)
{a=a-12;
printf("La hora en notacion de 12 horas:\n");
printf("%d%c%d PM\n",a,c,d);
}
else if(a==0)
{a=12;
printf("La hora en notacion de 12 horas:\n");
printf("%d%c%d AM\n",a,c,d);
         }
else if(a>=1 && a<12){
printf("La hora en notacion de 12 horas:\n");
printf("%d%c%d AM\n",a,c,d);}
else if(a==12){
printf("La hora en notacion de 12 horas:\n");
printf("%d%c%d PM\n",a,c,d);}
else if(a==24){
     a=0;
printf("La hora en notacion de 12 horas:\n");
printf("0%d%c%d AM\n",a,c,d);}
system("PAUSE");
return 0;

    }
