#include<stdio.h>
int main(){
	int a,b,mcd;
	puts("\t Pregunta 4");
	puts("Hallar MCD de dos numeros, por el metodo de euclides.");
	puts("Ingrese a:");
	scanf("%d",&a);
	puts("Ingrese b:");
	scanf("%d",&b);
	if(a>=b){
		mcd=maxcomdivisor(a,b);
		printf("El MCD es %d",mcd);
		}
	if(a<b){
		mcd=maxcomdivisor(b,a);
		printf("El MCD es %d",mcd);
	
		}
		return 0;
	}
int maxcomdivisor(int a,int b){
	int c;
	if(a%b==0){
		return b;
	}
	else{
		c= maxcomdivisor(b,(a%b));
	}
	return c;
	}
