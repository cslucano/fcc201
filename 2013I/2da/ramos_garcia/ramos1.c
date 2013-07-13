#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {


	float peso,precio, precio_n, preciomas;
	float ingreso,ingreso1,ingreso2;
	int masc;

	//peso: referente a las naranjas
	//preciomas: precio que pagará el cliente con mas de 10kg
	//precio_n: precio normal	(sin dscto)

	printf("Numero de clientes sin pagar: 20\n");
	printf("Ingrese el numero de clientes que compran mas de 10kg en naranjas: ");
	scanf("%d",&masc);
	printf("");
	
		preciomas = 0.15*precio_n;
		ingreso1 = masc*preciomas;
	
		precio = precio_n;
		ingreso2 = (20-masc)*precio;
		
ingreso = ingreso1 + ingreso2;
printf("ingreso total: %f + %f = %f",ingreso1,ingreso2,ingreso); 

return 0;
}
