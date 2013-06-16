#include<stdio.h>
int main ()
{
int a,b,c,x,y,r;// los centros son a,b y x,y y los radios son c y r RESPECTIVAMENTE
printf("los centros y radios son");
scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&r);
if((a==x)&&(b==y)&&(c==r))
printf("son las misma circunferencia");
if((a==x)&&(b==y)&&(c!=r))
printf("si una de ellas esta dentro de la otra");
if((a!=x)&&(b!=y)&&(c!=r))
printf(("el numero de cortes es 2 o 1 "));
return 0;
}
