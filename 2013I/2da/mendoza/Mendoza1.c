#include <stdio.h>

int main() {

int i=1;
float k=0.0, costokilo=0, paga, total=0;
printf("ingrese los datos de los clientes. \n");
printf("ingrese el costo de naranjas por kilo. \n"); scanf("%f",&costokilo);
do {
printf("Cliente%d:\n",i);
printf("kilos de compra:\n"); scanf("%f",&k);
{
if (k>10.0)
paga=0.15*k*costokilo;
else paga = k*costokilo;
printf("el cliente%d pagara= %.2f\n",i,paga);
total=total+paga;}
i++;
}
while(i<=25);

printf("total que recibe la tienda: %f\n",total);
return 9;
}
