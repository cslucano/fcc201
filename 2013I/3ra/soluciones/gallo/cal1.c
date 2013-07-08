	#include<stdio.h>
	#define DIM 20
	
int main(){

	int v[DIM];
	int i;
		
	for(i=0;i<20;i++){
		do{
		    printf("v[%d] =",i);
		    scanf("%d",&v[i]);
		}while( (1>=v[i]) || (v[i]>=20) );
	}
	
	printf("v[");
	for(i=0;i<20;i++){
		printf("%d ",v[i]);
	}
	printf("]");
	
	return 0;

}
