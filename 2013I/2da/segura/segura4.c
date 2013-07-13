#include<stdio.h>
int main(){

int n;
int crake number(int n); 
printf("ingrese numero de elementos: ");
scanf("%d",&n);
printf("La serie crake number de %d es %d\n",n,crake number(n));


return 0;
}

int crake number(int n)
{

int i,t;
t= ((float)1/6)*(n*n*n+5*n+6);

for(i=1;i<=n;i++)
  return t;

}
