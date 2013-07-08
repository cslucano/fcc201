#include<stdio.h>
float factorial(int n){
if(n==0)
	return 1.0;
else
	return factorial(n-1)*n;
}

int combinatoria(int n,int k){
float a,b;
a=factorial(n-k)*factorial(k);
b=factorial(n);
return ((int)(b/a));
}



main(){
int num,i=0,j,N,x,k,aux;
scanf("%d",&num);
N=((num+1)*num)/2;
int A[N];
for(j=0;j<num && i<N;j++)
  for(x=0;j>=x;i++,x++)
    A[i]=combinatoria(j,x);


k=num;
for(j=1;j<=(num+1);j++,k--){
  for(i=0;i<k;i++)
    printf(" ");
  for(aux=j;aux>0;aux--,x++)
    printf("%d ",A[x]);
  printf("\n");
}
/*
for(i=0;i<N;i++)
  printf("%d",A[i]);
*/
}
