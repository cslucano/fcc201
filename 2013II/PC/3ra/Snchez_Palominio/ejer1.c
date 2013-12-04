#include <stdio.h>
#define max 1000000


//prob 1
int se_repite(int vector[]){
	int i, j;

for(i=0;i<max;i++){
	j=i+1;	
	while(j<max){	
		if(vector[i]==vector[j]){
		printf("se repite:VEC[%d]:VEC[%d]:%d\n",i,j,vector[i]);
		return 0;}
	j++;
	}
}
return 0;}

//prob 2
void ElqueFalta(int vector[]){
	int numero=0, i, j;	
	for(i=0;i<10;i++){

		while(numero<10){
			numero++;
			if(numero==vector[i])
			j++;		
		}
	if(i!=j) printf(" ") ;
	}

}





//prob 3
int SumadeDosMasGrandes(int vector[],int tamano)
{
	int i, j, M, mayor, mayor2;
	mayor=vector[0];

	for(i=0;i<tamano;i++){
		if(vector[i]>mayor){
		mayor2 = mayor;
		mayor=vector[i];
		M=i;}
	}	
	for(j=0;j<tamano;j++){
		if(j==M) continue;	
		if(vector[j]>mayor2)
		mayor2=vector[j];
	}
printf("la suma de los dos mayores es: %d\n",mayor+mayor2);
return 0;
}






//prob 4
void eliminarDuplicados(int vector[],int tamano){
	int contador=0;
	int i, j;

	for(i=0;i<tamano;i++){
		if(vector[i]==vector[i+1]){
			for(j=i+1;j<tamano;j++)		
			vector[j]=vector[j+1];
		contador++;
		}
		

	}
printf("la cantidad no duplicada es:%d\n",tamano-contador);
}






void main(){
int v[10]={1,1,1,2,2,3,10,10,11,11};
int n=10;
 
//
se_repite(v);
SumadeDosMasGrandes(v,n);
eliminarDuplicados(v,n);
ElqueFalta(v);

}
