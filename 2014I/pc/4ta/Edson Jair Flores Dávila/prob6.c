#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct coordenadas_cartesianas{
   float x;
   float y;
}cc;
int main(){
  cc p1;
  cc p2;
  double ang;
  puts("ingrese el punto 1:");
  scanf("%f %f",&p1.x,&p1.y);
  puts("ingrese el punto 2:");
  scanf("%f %f",&p2.x,&p2.y);
  ang=atan(((p2.y)-(p1.y))/((p2.x)-(p1.x)));
  printf("el angulo es: %lf \n",ang);
  return 0;
}
