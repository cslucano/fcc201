#include<stdio.h>
#include<string.h>


void repite(int M[1000000]){
	int i, j, x, y, n;
	i=-1; j=1; n=1;
	do{
		i=i+1;
		x=M[i];
		j=i+1;
		do{
			if(x=M[j]) n=0;
			j++;
		}while(n>0&&j<999999);
	}while(n>0&&i<999999);
	if(n==0) printf("El primer numero que se repite es %d", x);
	else printf("Ninguno se repite");
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
	repite(M);
	return 0;
	}
