#include<stdio.h>
obetenerFlotante(float *p){
printf("El valor es: %f\n",*p);
}
int main(){
float a; //Declaración de variable entera de tipo entero
float *puntero; //Declaración de variable puntero de tipo entero
printf("el numero es:\n");
scanf("%f",&a);
puntero = &a; //Asignación de la dirección memoria de a
obetenerFlotante(puntero);
return 0;
}
