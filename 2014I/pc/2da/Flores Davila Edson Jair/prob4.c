#include<stdio.h>
#include<stdlib.h>
int mcd(int a, int b){
  if((a%b)==0){
      return b;
  }else{
      return mcd(b,(a%b));
  }
}
int main(){
  int a,b;
  printf("ingrese los numeros para calcular el mcd(a>b)\n");
  scanf("%d %d",&a,&b);
  printf("el mcd es:%d\n",mcd(a,b));
  
  return 0;
}
