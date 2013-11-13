#include<stdio.h>
#include<stdlib.h>
int main(){
    float x;
    
    printf("ingrese un termino de la funcion x=");
    scanf("%f",&x);    
    while(0.01*(2*x-2*3.14159)>=0.00001)
      {
       x=x-0.01*(2*x-2*3.14159);
      }
    
    printf("el resultado es: %.5f \n",x);
    
return 0;
}
