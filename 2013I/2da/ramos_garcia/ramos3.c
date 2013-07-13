#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int serie () {

	int i;
	int cn,n;
	cn= (1/6) * (pow(i,3)+5*i+6);
	for(i=0;i<=n;i++)
	printf("%d, \n",cn);

	return cn;

}

int main () {
	
	int n;
	printf("Ingrese n: ");
	scanf("%d",&n);

	if (n<0)
	printf("Error!!! : solo numeros mayores de cero");
	else
	printf("%d",serie ());

return 0;
}
