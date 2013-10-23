#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float desplazamiento(float tiempo, float f)
{
	float posicion = sin(2 * 3.14159 * f * tiempo);
	return posicion;	
}

int main()
{
	float posicion[2000];
	float velocidad[2000];
	float aceleracion[2000];

	float t0=0;
	float x0=0;
	float v0=0;
	float a0=0;
	float f0=1;

	float t = 0;
	float delta_t = 0.001;

	int i = 0;
	while(i < 2000)	
	{	
		t = t + delta_t; 
		posicion[i] = desplazamiento(t, f0);
		i = i + 1; 
	}

	i = 1;
	velocidad[0] = v0;
	while(i < 2000)	
	{	
		velocidad[i] = (posicion[i]-posicion[i-1])/delta_t;
		i = i + 1; 
	}

	i = 1;
	aceleracion[0] = a0;
	while(i < 2000)	
	{	
		aceleracion[i] = (velocidad[i]-velocidad[i-1])/delta_t;
		i = i + 1; 
	}


	i = 0;
	while(i < 2000)	
	{	
		printf("%f %f %f\n", posicion[i], velocidad[i], aceleracion[i]);
		i = i + 1; 
	}


	return 0;
}
