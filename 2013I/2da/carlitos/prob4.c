	#include<stdio.h>
	
float scak(int n){

	int y;
	if (n==0){
	
		return 0;
	}
	
	else{
	
		return scak(n-1) + (n*n)/2 - (3*n)/2 + 2;
	}
}	
	

int main(){
	
	int n;
	printf("ingrese el numero n: ");
	scanf("%d",&n);
	
	printf("la suma de cake(%d) = %.0f\n",n,scak(n));	
	
	return 0;
}












