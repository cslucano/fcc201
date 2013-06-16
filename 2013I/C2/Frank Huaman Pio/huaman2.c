#include<stdio.h>
#include<math.h>
void fp(int k){
	int e=0,i,r,n;
	n=k;
	for(i=2;i<=n;i++){
		r=n%i;
		while(r==0){
			n=n/i;
			e++;
			r=n%i;
			if(n==1)
				r=1;
			}
		if(e!=0)
			printf("[%d,%d]",i,e);
		}
	}
int main(){
	int n;
	printf("Ingrese numero:");
	scanf("%d",&n);
	fp(n);
	return 0;
	}
	
