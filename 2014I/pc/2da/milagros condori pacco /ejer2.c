#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int suma(int x){
    int sum=0,i;
    for(i=1;i<=x;i++){
       sum+=i;
}
return sum;
}
void main(){
    int n,m;
    printf("introduzca un numero entero: \n");
    scanf("%d",&n);
    m=suma(n);
    printf("el resultado de la suma de 1+2+..+%d es: %d\n",n,m);
}

