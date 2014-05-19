#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   int n,i;
   float s;
scanf("%d",&n);
while(i<=n){
s+= (float)(2*pow(-1,i)*pow(3,(1/2)-i))/(2*i+1);
i++;
}
printf("%.5f",s);
return 0;
}
