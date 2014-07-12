#include <stdio.h>
#include <math.h>
#define G 
typedef struct punto{
	float x;
	float y;
	
	}punto_t;

int main(){
	punto_t p1,p2;
	float_t m1,m2,fuerza;
	printf("\t Encontrar la fuerza entre dos masas m1,m2\n");
	printf("Ingrese los datos \n");
	printf("m1: ");
	scanf("%f",&m1);
	printf("coordenadas (x,y): ");
	scanf("%f %f",&p1.x,&p1.y);
	getchar();	
	printf("m2: ");
	scanf("%f",&m2);
	printf("coordenadas (x,y): ");
	scanf("%f %f",&p2.x,&p2.y);
	getchar();
	puts("Fuerza entre ambas masas");
	fuerza=6.672*m1*m2/(100000000000*(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)));
	printf("%.15f",fuerza);
	return 0;
	}
