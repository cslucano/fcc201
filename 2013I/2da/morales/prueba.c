#include<stdio.h>
int rombo(int f){
	int n, i, a=1;
	n = (f-1)*2;
	while (a <= n){	
		a += 2;
		i = a-2;
		printf("\n");
		printf("\t\t\t");
		while (i!=0){
			return printf("*");		
			i = i - 1;		
		}	
	}
	printf("\n\n");
}
int main(){
	int f;
	printf("ingrese f: ");
	scanf("%d", &f);
	rombo(f);
	return 0;
}
