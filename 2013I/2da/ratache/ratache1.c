#include<stdio.h>
#define N 20
#define PK 2.0//precio por kilo

float funcion1(void){
float precio,total;
int C,n;
for(C=N;C>0;C--){
	printf("numero de kilos:\t");
	scanf("%d",&n);
	precio=n*PK;
	if(n>10)
		precio=0.75*precio;
	total=total+precio;
}
return total;
}
main(){
printf("Total vendido: %.3f",funcion1());
}
