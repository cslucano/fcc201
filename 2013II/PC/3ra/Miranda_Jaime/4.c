#include<stdio.h>

	int ED( int arr[] , int n )
	{
		int i , v[ 1000 ] ; // 1000?
		int ans = 0;
		v[ ans++ ] = arr[ 0 ];		
		for( i = 1 ; i < n ; i++ )
			if( arr[ i ] != v[ ans - 1 ] )
					v[ ans++ ] = arr[ i ];
		for( i = 0 ; i < ans ; i++ )
			arr[ i ] = v[ i ];
		return ans;
	}

int main()
{
	int n , l[ 1000 ] , i ; // 1000?
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++ )
		scanf( "%d" , &l[ i ] );
	int k = ED( l , n );
	printf("nuevo tamaño %d\n",k);
	for( i = 0 ; i < k ; i++ )
		printf("%d ",l[ i ]);
	printf("\n")
;	
}
