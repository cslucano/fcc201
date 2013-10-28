#include <stdio.h>
#include <stdlib.h>
int main (){
   int h,H,m,M;
   char c;
   printf("ingrese la hora en formato 24 horas de la forma hh:mm\n");
   scanf("%d%c%d",&h,&c,&m);
   if (h<=12){
     if(m>=10){
    printf("la hora en formato 12 horas es: %d%c%d\n",h,c,m);
}else printf("la hora en formato 12 horas es: %d%c0%d\n",h,c,m);
}   else {
  if (m>=10){
   switch (h){
case 13:
printf("la hora en formato 12 horas es: 1:%d pm\n",m);
break;
case 14:
printf("la hora en formato 12 horas es: 2:%d pm\n",m);
break;
case 15:
printf("la hora en formato 12 horas es: 3:%d pm\n",m);
break;
case 16:
printf("la hora en formato 12 horas es: 4:%d pm\n",m);
break;
case 17:
printf("la hora en formato 12 horas es: 5:%d pm\n",m);
break;
case 18:
printf("la hora en formato 12 horas es: 6:%d pm\n",m);
break;
case 19:
printf("la hora en formato 12 horas es: 7:%d pm\n",m);
break;
case 20:
printf("la hora en formato 12 horas es: 8:%d pm\n",m);
break;
case 21:
printf("la hora en formato 12 horas es: 9:%d pm\n",m);
break;
case 22:
printf("la hora en formato 12 horas es: 10:%d pm\n",m);
break;
case 23:
printf("la hora en formato 12 horas es: 11:%d pm\n",m);
break;}

}else {
switch (h){
case 13:
printf("la hora en formato 12 horas es: 1:0%d pm\n",m);
break;
case 14:
printf("la hora en formato 12 horas es: 2:0%d pm\n",m);
break;
case 15:
printf("la hora en formato 12 horas es: 3:0%d pm\n",m);
break;
case 16:
printf("la hora en formato 12 horas es: 4:0%d pm\n",m);
break;
case 17:
printf("la hora en formato 12 horas es: 5:0%d pm\n",m);
break;
case 18:
printf("la hora en formato 12 horas es: 6:0%d pm\n",m);
break;
case 19:
printf("la hora en formato 12 horas es: 7:0%d pm\n",m);
break;
case 20:
printf("la hora en formato 12 horas es: 8:0%d pm\n",m);
break;
case 21:
printf("la hora en formato 12 horas es: 9:0%d pm\n",m);
break;
case 22:
printf("la hora en formato 12 horas es: 10:0%d pm\n",m);
break;
case 23:
printf("la hora en formato 12 horas es: 11:0%d pm\n",m);
break;}
}
}

return 0;
}
