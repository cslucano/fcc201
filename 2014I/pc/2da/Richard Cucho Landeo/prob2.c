#include<stdio.h>
int suma(int n){
    int k,s;
    for(k=1;k<=n;k++)
        s=k+s;
    return s;
}
int main(){
    int n;
    printf("dar el numero natural:\n");
    scanf("%d",&n);
    printf("La suma de los %d primeros numeros naturales es: %d\n",n,suma(n));
    return 0;
}
 
