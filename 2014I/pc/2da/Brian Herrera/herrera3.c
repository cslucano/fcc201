#include<stdio.h>
#include<math.h>
int factorial(int);
void pascal(int);
int main(){
int n;
printf("ingrese el numero de filas:");
scanf("%d",&n);
pascal(n);
return 0;
}

int factorial (int x){
int i,s=1;
if(x==0)
return 1;
else
for(i=1;i<=x;i++)
s=s*i;

return s;
}

void pascal(int n){
int i,j,a;
for(i=0;i<n;i++){
for(j=0;j<=i;j++){

a=factorial(j)*factorial(i-j);

if(j==i)
printf("%d\n",factorial(i)/a);
else{
printf("%d",factorial(i)/a);
printf(" ");
}
  }
 }
}


