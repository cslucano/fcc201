#include<stdio.h>
int main(){
int A[100],i,j,n;
for(i=0;i<n;i++){
                scanf("%d",&A[i]);
                }
for(i=0;i<n;i++){
for(j=n-1;j>i;j--){
if(A[i]==A[j]){
               printf("%d y %d",i,j);
              }

                  }
                }
return 0;
}
