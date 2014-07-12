#include<stdio.h>
#include<stdlib.h>
void aleatoria(int *n){
	int aleatorio;
	srand(time(NULL));
	aleatorio= 1+rand()%2;
	if(aleatorio==1)
	   printf("Numero resulta: -%d\n",*n);
	if(aleatorio==2)
	   printf("Numero resulta: +%d\n",*n);    
}
int main(){
	int n;
	do
	{	
		printf("Ingrese numero: \n");
		scanf("%d",&n);
		aleatoria(&n);
	}while(n!=EOF);
	return 0;
}
