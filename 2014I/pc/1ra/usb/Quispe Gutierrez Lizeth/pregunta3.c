#include<stdio.h>
#include<stdlib.h>
int main(){
	int ca4,ca5,ca6,ca7;
	
	for(ca4=10;ca4<=50;ca4++){
		printf("Para %d soles se necesita:\n",ca4);
	if(ca4/10 != 0){
		printf("%d billetes de 10\n",ca4/10);
		}
	ca5 = ca4%10;
	if(ca5/5 != 0){
		printf("%d monedas de 5\n",ca5/5);
		}
	ca6 = ca5%5;
	if(ca6/2 != 0){
		printf("%d monedas de 2\n",ca6/2);
		}
	ca7 = ca6%2;
	if(ca7/1 != 0){
		printf("%d monedas de 1\n",ca7);
		}
	printf("\n");
	if(ca4/13 != 0){
		printf("%d monedas de 13\n",ca4/13);
		}
	ca5 = ca4%13;
	if(ca5/7 != 0){
		printf("%d monedas de 7\n",ca5/7);
		}
	ca6 = ca5%7;
	if(ca6/3 != 0){
		printf("%d monedas de 3\n",ca6/3);
		}
	ca7 = ca6%3;
	if(ca7/1 != 0){
		printf("%d monedas de 1\n",ca7);
		}
	printf("\n");
}
	return 0;
	}
