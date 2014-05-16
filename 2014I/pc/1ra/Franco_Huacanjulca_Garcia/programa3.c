#include<stdio.h>
int main(){
int precio,n1,n2,n3,n4,r1,r2,r3,total1,total2;
printf("Introduzca el precio del plato cuyo precio fluctua entre 10 y 50 nuevos soles\n");
scanf("%d",&precio);
//analizando el numero de monedas necesarias para el sistema de Mistura!!
n1=precio/13;
r1=precio%13;
n2=r1/7;
r2=r1%7;
n3=r2/3;
r3=r2%3;
n4=r3/1;
total1=n1+n2+n3+n4;
printf("El numero total de monedas de mistura es %d\n",total1);
//analizando el numero de monedas necesarias para el sistemas de Nuevos Soles!!
n1=precio/10;
r1=precio%10;
n2=r1/5;
r2=r1%5;
n3=r2/2;
r3=r2%2;
n4=r3/1;
total2=n1+n2+n3+n4;
printf("El numero total de monedas de Nuevos soles es %d\n",total2);
if(total1>total2) printf("Para este precio conviene el sistema de Nuevos soles!!\n");
else printf("Para este precio conviene el sistema de Mistura");
return 0;
}
