#include<stdio.h>
int main(){
	//Asumiendo el precio por kilogramo = S/ 5.00
	float ac, peso, monto, precio = 5.0;
	int i;
	for (i=1; i<=20 ; i++){
		printf("\t\t Cliente número %d\n",i);
		printf("Ingresar el peso (en kg) comprado: ");
		scanf("%f", &peso);
		if(peso<0){
			printf("Ha ingresado un peso negativo\n");
			i=i-1;
			continue;	
		}
		else if(peso <= 10){
			monto = peso*precio;
			ac = ac + monto;
		}
		else {
			monto = peso*0.85*precio;
			ac = ac + monto;	
		}
		printf("Cliente número %d pagará: S/ %.2f \n", i, monto);	
	}
	printf("En total los 20 clientes pagarán: S/ %.2f\n", ac);

	return 0;
}
