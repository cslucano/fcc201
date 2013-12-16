#include<stdio.h>
int main()
{
	int i,n;
	int v[ 1000001 ]={};
	int ar[ 100000 ];
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&ar[ i ]);
		v[ ar[ i ] ]++;
	}
	for( i = 0 ; i <= 1000000 ; i++ )
		if( v[ i ] >= 2 ){
			printf("%d",i); printf(" se repite\n");	}
}
