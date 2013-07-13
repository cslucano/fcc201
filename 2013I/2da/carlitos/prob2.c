	#include<stdio.h>

int fun(int n){
	
	if(n%2!=0)
	int y1,y2,y3,y4,r,x;
		
		y1<=x+ (n+1)/2;
		y2>=x-(n+1)/2;
		y3>=-x-(n+1)/2;
		y4<=-x+(n+1)/2;
		
		r=y1&&y2&&y2&&y4;

		return r;
}

int main(){

	int n,i,j;
	printf("ingrese el numero de filas n: ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		
		for(j=n;j=0;j--){
		
			printf("%d",fun(n));
		
		}
		
		printf("%d\n",fun(n));
	}
	
	return 0;

}
