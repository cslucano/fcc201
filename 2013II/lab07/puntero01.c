#include <stdio.h>
#include <stdlib.h>
struct xy
{
	int x;
	int y;
};
int main()
{
	xy* parabola[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		xy* value = (xy*)malloc(sizeof(xy));
		value->x = sin(i/100);
		value->y = sin(2*i/100);
	}

	return 0;
}
