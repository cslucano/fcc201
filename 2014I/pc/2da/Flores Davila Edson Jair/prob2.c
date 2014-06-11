#include<stdio.h>
#include<stdlib.h>
int suma(int n){
   int s,i;
   for(i=1;i<=n;i++){
       s=s+i;
   }
   return s;
}
int main(){
  int n;
  printf("ingrese el numero:\n");
  scanf("%d",&n);
  printf("la suma es:%d\n",suma(n));
  return 0;
}
