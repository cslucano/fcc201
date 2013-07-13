#include<stdio.h>
float Descuento(double Pv1){
    float Pv2;
      Pv2=Pv1*0.15;
return Pv2;
}
/*void total_tienda(float Cl){
   int k=0; 
   for(Cl=1;Cl=20;Cl++){
      Cl=Cl+k;
    }
    printf("La cantidad a recibir la tienda es: %f",Cl);  
}*/
int main(){
   int Cant,i;
   double Pv1;
       printf(" Insertar el precio de las naranjas:\n");
       scanf("%lf",&Pv1);
    for(i=20;i=1;i--){
       printf("Insertar la Cantidad de Naranjas:\n");
       scanf("%d",&Cant); 
      if (Cant>10){
         printf("El precio a pagar es:\n %.3lf",descuento((double)Pv1));
         }
       else{
           printf("El precio a pagar es:\n %f",Pv1);
         } 
     }
return 0;  
} 
      
