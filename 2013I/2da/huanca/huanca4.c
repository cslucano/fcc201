#include<stdio.h>
int main (){
 int i,n,z;
printf("ingrese el numero:\n");
scanf("%d",&n);
 for(i=1;i<=n;i++)
  z=(i*i*i+5*i+6)/6;
 printf("%d",z);
  return 0;
}
