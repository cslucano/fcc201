#include<stdio.h>
int main(){
	int i,j,h;
	
	for(i=1;i<=7;i++){
			for(j=1;j<=i;j++){
				printf("*");
				}
			for(h=6;h>=i;h--){
				printf("0");
			}
			printf("\n");
		}
	return 0;
	}

