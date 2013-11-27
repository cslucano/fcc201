#include<stdio.h>
int eliminarDuplicados(int arr[],int n){
int m,i,j,A[100],s=0;
for(i=0;i<n;i++){
                scanf("%d",&A[i]);
                }
for(i=0;i<n;i++){
for(j=n-1;j>i;j--){
if(A[i]==A[j]){
               s++;
              }

                  }
                }
m=n-s;
return m;
}

