#include<stdio.h>
int main()
{
	int numb[ 1000001 ]={};
	int n , a; // a es el número cualquiera
	
	int v[ 1000001 ],i;
	scanf("%d",&n);	
	for( i = 0 ; i < n ; i++ )
	{
		scanf("%d",&v[i]);
		numb[ v[i] ] = 1;	
	}
	scanf("%d",&a); // numero cualquiera
	if( numb[ a ] ) printf("Si esta\n");
	else printf("No esta\n");
}
