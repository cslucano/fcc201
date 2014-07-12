#include<stdio.h>
#include<stdlib.h>
#include <math.h>
struct  flotantes{
float x;
float y;
};

int main(){
 struct flotantes p1,p2;
int x,y;
float valor;
float  m1,m2;
printf("ingrese coordenadas del primer punto\n");
scanf("%f %f",&p1.x,&p1.y);

printf("ingrese coordenadas del primer punto\n");
scanf("%f %f",&p2.x,&p2.y);


m1=p1.y/p1.x;
m2=p2.y/p2.x;
valor=(m1-m2)/(1+m1*m2);
printf("el angulo entre los dos puntos es :%.4f  rad \n",atan(valor));
return 0;
}
