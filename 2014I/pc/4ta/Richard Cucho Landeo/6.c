#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1416
#define c 180.0
typedef struct numerosflotantes{
	float x;
	float y;
}*puntos;

double angulo(float x1,float x2,float y1,float y2){
	double i,x;
	float numero;
	numero=(y2-y1)/(x2-x1);
	x=(atan(numero)*pi)/c;
	return x;
};

int main(void){	
	float x2,y2;
	struct numerosflotantes *p1,*p2;
	p1=malloc(sizeof(struct numerosflotantes));
	p2=malloc(sizeof(struct numerosflotantes));
	printf("ingrese p1:");
	scanf("%f %f",&(p1->x),&(p1->y));
	printf("ingrese p2:");
	scanf("%f %f",&x2,&y2);
	p2->x=x2;
	p2->y=y2;
	printf("angulo: %.4f\n",angulo(p1->x,p2->x,p1->y,p2->y));
	free(p1);
	free(p2);
	p1=NULL;
	p2=NULL;
return 0;
}
