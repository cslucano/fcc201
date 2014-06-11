#include<stdio.h>
#include<stdlib.h>
int fun(int n){
    if(n==1){
         return 1;
    }else{
         return 1+fun(n-1);
    }
}
void imprimir_tri(int n){
   int i;
   for(i=1;i<=n;i++){
    switch(i){
      case 1:
           printf("%d",fun(1));
           printf("\n");
           break;
      case 2:
           printf("%d %d",fun(1),fun(1));
           printf("\n");
           break;
      case 3:
           printf("%d %d %d",fun(1),fun(2),fun(1));
           printf("\n");
           break;
      case 4:
           printf("%d %d %d %d",fun(1),fun(3),fun(3),fun(1));
           printf("\n");
           break;
      case 5:
           printf("%d %d %d %d %d",fun(1),fun(4),fun(6),fun(4),fun(1));
           printf("\n");
           break;
    }
   }
}
int main(){
  imprimir_tri(5);
  return 0;
}
