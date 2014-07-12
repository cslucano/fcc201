#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define G 6.67e-11 //considerndo las unidades de G la masa y coordenadas deben estar en unidades permitidas por el SI

typedef struct pnto
{
	float coord_x;
	float coord_y;
	float masa;
}pnto_t;

float dist(pnto_t p1,pnto_t p2)
{
	return(pow(p1.coord_x-p2.coord_x,2)+pow(p1.coord_y-p2.coord_y,2));
}
int main()
{	
	float d,fuerza;
	pnto_t p1,p2;
	printf("****Introduzca las coordenadas de los puntos****\n");
	printf("**\nPrimer punto**\n");
	printf("Coordenada X (m): \n");
	scanf("%f",&p1.coord_x);
	printf("Coordenada X (m): \n");
	scanf("%f",&p1.coord_y);
	printf("Masa del cuerpo en esta posicion(Kg): \n");
	printf("considerar masas grandes\n");
	scanf("%f",&p1.masa);

	printf("**\nSegundo punto**\n ");
	printf("Coordenada X (m): \n");
	scanf("%f",&p2.coord_x);
	printf("Coordenada Y (m): \n");
	scanf("%f",&p2.coord_y);
	printf("Masa del cuerpo en esta posicion(Kg) : \n");
	printf("considerar masas grandes\n");
	scanf("%f",&p2.masa);

	d=dist(p1,p2);
		
	fuerza=(float)(p1.masa*p2.masa)*G/d;
	
	printf("La fuerza entre ambos cuerpos resulta %f N",fuerza);
	return 0;
} 
