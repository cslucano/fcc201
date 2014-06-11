#include<stdio.h>
int main(){
	
	int i,j,h,a,b,c;
	
	for(i=1;i<=4;i++){
			for(j=3;j>=i;j--){
				printf("0");
				}
			for(h=1;h<=i;h++){
				printf("*");
			}
			for(j=2;j<=i;j++){
				printf("*");
				}
			for(h=3;h>=i;h--){
				printf("0");
				}
		
		printf("\n");
	}
	for(a=1;a<=3;a++){
		for(b=1;b<=a;b++){
				printf("0");
				}
		for(c=3;c>=a;c--){
			printf("*");
				}
		for(b=2;b>=a;b--){
				printf("*");
				}
		for(c=1;c<=a;c++){
				printf("0");
			}
		printf("\n");
	}
	return 0;
	}

