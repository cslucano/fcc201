#include<stdio.h>
int main(){
    int costo,m1,m2,m3,m4,v1,v2,v3,monto1,monto2;
    printf("El precio del plato cuyo precio que se encuentra en 10 - 50 nuevos soles\n");
    scanf("%d",&costo);
       m1=costo/13;
       v1=costo%13;
       m2=v1/7;
       v2=v1%7;
       m3=v2/3;
       v3=v2%3;
       m4=v3;
       monto1=m1+m2+m3+m4;
    printf("El numero total de monedas de mistura es %d\n",monto1);
       m1=costo/10;
       v1=costo%10;
       m2=v1/5;
       v2=v1%5;
       m3=v2/2;
       v3=v2%2;
       m4=v3/1;
       monto2=m1+m2+m3+m4;
    printf("El total de monedas en Nuevos soles es %d\n",monto2);
    if (monto1>monto2)
       printf("Por favor paque en nuevos soles!!\n");

    else 
        printf("Mejor use sistema mistura");
return 0;
}
