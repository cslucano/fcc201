	#include<stdio.h>
	#define DIM 100
int sumfil(int k){
	int a[DIM][DIM];
	int i,n,s;
	for(i=1;i<n;i++){
		s=0;
		s= s + a[i][k];
	}
	return s;
}	





int main(){
	int n,s,i,m,j,vM,vm,k;
	int a[DIM][DIM],A[DIM][DIM];
	
	printf("ingrese n y m orden de la matriz: ");
	scanf("%d %d",&n,&m);
	
	    
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}	
	} 
	
	printf(" A[%d][%d]\n",n,m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d  ",a[i][j]);
		}	
		printf("\n");
	}
	
	for(i=1;i<=n;i++){
		if(sumfil(i)==0){
			vM=sumfil(i);
			vm=sumfil(i);
		}
		else{
			if(sumfil(i)>vM)
				vM=sumfil(i);
			if(sumfil(i)<vm)
				vm=sumfil(i);
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
