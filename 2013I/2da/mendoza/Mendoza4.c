#include <stdio.h>

float serie ( int n){
float z;
 z = (n*n*n +5*n+6)/6.0;
return z;}

int main() {

int n; int i,j;
printf("ingrese n: ");
scanf("%d",&n);
for(i=0;i<=n;i++){

j= serie(i);
printf("%d, ",j);

 }    


return 9;
}
