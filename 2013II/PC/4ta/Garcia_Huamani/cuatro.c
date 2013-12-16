#include <stdlib.h>
#include <stdio.h>

int main(){
int dim,n;
printf("introdusca la dimension del vector:");
scanf("%d",dim);
float a[dim];
float* p=a;
for(i=0;i<dim;i++)
scanf("%f",p+i);
printf("ingrese n:");
scanf("%d",&n);
p=funcion(a,n);
free(p);
}

float* funcion(float* a, int n){

return a;
}
