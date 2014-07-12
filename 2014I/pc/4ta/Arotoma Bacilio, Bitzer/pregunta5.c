#include<stdio.h>
#include<math.h>
#define G 6.67e-7

typedef struct punto
{
	float posicion_x;
	float posicion_y;
	float masa;
}punto_t;

float distancia(punto_t p1,punto_t p2)
{
	return(pow(p1.posicion_x-p2.posicion_x,2)+pow(p1.posicion_y-p2.posicion_y,2));
}

int main()
{	
	float d,fuerza;
	punto_t p1,p2;
	printf("\t\tIntroduzca las coordenadas de los puntos\n");
	printf("Primer punto\nCoordenada x : ");
	scanf("%f",&p1.posicion_x);
	printf("\nCoordenada y : ");
	scanf("%f",&p1.posicion_y);
	printf("\nMasa del cuerpo en esta posicion : ");
	scanf("%f",&p1.masa);

	printf("Segundo punto\nCoordenada x : ");
	scanf("%f",&p2.posicion_x);
	printf("\nCoordenada y : ");
	scanf("%f",&p2.posicion_y);
	printf("\nMasa del cuerpo en esta posicion : ");
	scanf("%f",&p2.masa);

	d=distancia(p1,p2);
		
	fuerza=(float)(p1.masa*p2.masa)*G/d;
	printf("La fuerza entre ambos cuerpos es %f\n",fuerza);
	printf("\nFuerza=(G*m1*m2)/d^2");
	
	return 0;
}
