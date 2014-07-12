#include<stdio.h>
#include<stdlib.h>
void obtenerflotante(float *p){
   int n=0;
   n=rand()%10;
   if((n%2)==0){
     *p=(+1)*(*p);
   }else{
       *p=(-1)*(*p);
   }
   printf("%d",n);
   n=0;
}
int main(){
   float f;
   float *p;
   p=&f;
   printf("ingrese numero flotante:");
   scanf("%f",&f);
   obtenerflotante(p);
   printf("el numero es: %.2f \n",*p);
   return 0;
}
