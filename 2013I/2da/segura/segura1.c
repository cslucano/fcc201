#include<stdio.h>
int main(){

int i;
float cpra,suma=0.0;
printf("precio de las naranjas\n");
printf("2 soles el kilo\n");
printf("¿cuanto desean comprar?(en kilos):\n");

for(i=1;i<=20;i++)
scanf("%f\t",&cpra);

if(0<cpra<=10){
  for(i=1;i<=20;i++){
    suma+=2.0*cpra;
   }
  printf("el total para la tienda es %f\n",suma);
}


else {
  for(i=1;i<=20;i++){
    suma+=2.0*0.85*cpra;
   }
  printf("el total para la tienda es %f\n",suma);
}

return 0;
}
