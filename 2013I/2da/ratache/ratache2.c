#include<stdio.h>

void rombo(int n)
{
int j,i,k=n,aux;
for(i=1;k>0;k-=2,i+=2){
	aux=(k-1)/2;
	while(aux>0){
		printf(" ");
		aux--;	
	}
	
	for(j=i;j>0;j--)
		printf("*");
	printf("\n");
}
aux=n-2;
for(i=1;aux>0;i++,aux-=2){
	
	for(j=i;j>0;j--){
		printf(" ");
	}	

	for(k=aux;k>0;k--)
		printf("*");
	
	printf("\n");
}

}
main(){
int num;
printf("numero impar:\t");
scanf("%d",&num);
rombo(num);
}
