#include<stdio.h>
#include<stdlib.h>

 int main(){
int a,b,x;
printf("ingresar numeros");
scanf("%d %d",&a,&b);

while(a%b!=0){
x=b;
b=a%b;
a=x;

}

printf("%d",b);
 return 0;
  }
