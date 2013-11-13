#include<stdio.h>
#include<stdlib.h>
int main(){
    float x;
    
    printf("ingrese un termino de la funcion x=");
    scanf("%f",&x);    
    while((x*x*x-10*x+1)/(3*x*x-10)>=0.00001)
      {
       x=x-(x*x*x-10*x+1)/(3*x*x-10);
      }
    
    printf("el resultado es: %.5f \n",x);
    
    
return 0;
}
 
