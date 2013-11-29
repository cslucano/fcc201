#include<stdio.h>
#include<string.h>

void falta(int M[1000000]){
	int i, j, n;
	j=0;
	i=0;
	n=1;
	do{
		do{
		if(M[i]==j) n=0;
		j++;
		}while(j<999999&&n>0);
		i++;
	}while(i<999999 && n<1);
	if(n==0) printf("No faltan numeros");
	else printf("El numero que no esta es el %d", j);
}

int main(){
	int M[1000000]; 
	int i, j;
	i=0; j=1;
	do{
	//printf ("Ingrese el %d-esimo termino: ", j);
	scanf("%d", &M[i]);
	i++;
	j++;
	}while(i<999999);
	falta(M);
	return 0;
	}
