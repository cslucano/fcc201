#include<stdio.h>
int suma(int );
int main(){
int n;
printf("ingrese el numero:");
scanf("%d",&n);
printf("la suma de los primeros %d numeros enteros es %d\n",n,suma(n));
return 0;
}

int suma(int m){
int i,s=0;
for(i=1;i<=m;i++)
s=s+i;
return s;
}

