#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,a;
	puts("\tPregunta 3");
	puts("Generar el triángulo de pascal");
	puts("Ingrese el numero de filas:");
	scanf("%d",&a);
	puts("");
	puts("Se genera:");
		for(i=0;i<a;i++){
			for(j=0;j<=i;j++){
			printf("%d ",pascal(i,j));
	}
	puts("");
}
		
		
	

return 0;
}
int pascal(int a,int b){
	if(b==0){
		return 1;
	}
	if(b==a){
		return 1;
		}
	else{
		return pascal(a-1,b-1)+pascal(a-1,b);
		}
}
