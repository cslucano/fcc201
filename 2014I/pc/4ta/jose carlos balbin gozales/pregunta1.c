#include<stdio.h>
#include<stdlib.h>

void obtenerflotante(float *valor);

int main(){
float numero;

printf("ingrese un numero flotante \n");
scanf("%f",&numero);
obtenerflotante(&numero);

return 0;
}

void obtenerflotante(float *valor){
printf("el numero ingresado es :%f\n",*valor);
}
