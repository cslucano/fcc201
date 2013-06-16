#include<stdio.h>
int main(){
  float monto;
      printf("ingrese el monto de la compra\n");
      scanf("%f",&monto);
      if(monto<800.0)
        {printf("Le corrresponde un descuento del 0%\n");
        printf("Le corresponde pagar %f\n",monto);}
        else
         if(monto<=1500.0)
           { printf("Le corrresponde un descuento del 10%\n");
             printf("Le corresponde pagar %f\n",0.9*monto);}
         else
              if(monto<=5000.0)
                 { printf("Le corrresponde un descuento del 15%\n");
                   printf("Le corresponde pagar %f\n",0.85*monto);} 
              else
                   {printf("Le corrresponde un descuento del 10%\n");
                   printf("Le corresponde pagar %f\n",0.8*monto);}
   return 0;
  }
