#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795

typedef struct coordenada2d{
 float x;
 float y;       
    
}coordenada;

float calcularangulo(coordenada p1,coordenada p2){
float angulo;
float param=((p1.x*p2.x)+(p1.y*p2.y)) /(sqrt(pow(p1.x,2)+pow(p1.y,2))*sqrt(pow(p2.x,2)+pow(p2.y,2)));
angulo = acos(param)*(180/PI);
return angulo;     
}

int main(){
    
float angulo;
coordenada p1,p2;
printf("Ingrese las cordenadas de p1\n");
printf("x: ");
scanf("%f",&p1.x);
printf("y: ");
scanf("%f",&p1.y);
printf("Ingrese las cordenadas de p2\n");
printf("x: ");
scanf("%f",&p2.x);
printf("y: ");
scanf("%f",&p2.y);
angulo=calcularangulo(p1,p2);
//printf("%.2f %.2f %.2f %.2f",p1.x,p1.y,p2.x,p2.y);
printf("El angulo entre los dos vectores es: %f\n",angulo);
return 0;
    
}
