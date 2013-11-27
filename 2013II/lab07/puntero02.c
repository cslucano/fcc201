#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
} Point;
int main()
{
	Point* parabola[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		Point* value = (Point*)malloc(sizeof(Point));
		value->x = sin(i/10.0);
		value->y = sin(2*i/10.0);
		printf("%.8f %.8f\n",value->x,value->y);
	}

	return 0;
}
