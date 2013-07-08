	#include<stdio.h>
	#define DIM 100
	
int main(){
	int n,i,x,p,j;
	int a[DIM][DIM],A[n][n];
	do{printf("ingrese n: ");
	scanf("%d",&n); 
	    }while(n%2==0);
	    
	    
	    
	/* for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}	
		//printf("\n");
	}  */
	
	
	printf("matriz A[%d][%d]\n",n,n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d  ",a[i][j]);
		}	
		printf("\n");
	}
	
	/*do{printf("ingrese X: ");
	scanf("%d",&x);
	}while(x);
	*/
	return 0;
}
