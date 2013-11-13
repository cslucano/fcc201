#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float k=0;
float pi,termino_k=1,suma=0;


while(fabs(termino_k) >= 0.00001){

pi=2.0*pow(-1.0,k)*pow(3.0,0.5-k)/(2.0*k+1.0);
termino_k=pi;
suma+=pi;
k++;
}

printf("El valor de pi es: %f y el termino k es: %f \n",suma,termino_k);

return 0;
}


