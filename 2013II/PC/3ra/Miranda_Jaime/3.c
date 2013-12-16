#include<stdio.h>
int SDMG( int *array , int tam )
{
	if( tam < 2 ) return -1; // no existe respuesta
	int k = 0 , n = tam , i;
	for( i = 0 ; i < n ; i++ )
		if( array[ k ] < array[ i ] ) k = i;
	int aux = array[ k ];
	array[ k ] = array[ n - 1 ];
	array[ n - 1 ] = aux;
	k = 0;
	 for( i = 0 ; i < n - 1 ; i++ )
		if( array[ k ] < array[ i ] ) k = i;
	return array[ n - 1 ] + array[ k ];
}
int main()
{
	int v[ 1000 ];
	int n , i ;
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++ ) scanf("%d",&v[i]);
	printf("%d\n", SDMG( v , n ) );
}
