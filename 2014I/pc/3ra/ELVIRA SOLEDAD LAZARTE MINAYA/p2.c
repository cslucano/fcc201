#include<stdio.h>
#include<stdlib.h>
void aleatorio(int X[100],int x ){
int i;
for(i=0;i<x;i++){
X[i]=rand()%10;
}
}
void imprimir(int X[100],int x){
int i;
for(i=0;i<x;i++){
printf("%d\n",X[i]);
}
}

int suma1(int X[100],int x){
int max1,max2,i,suma,s;
max1=0;
max2=0;

for(i=0;i<x;i++){
if(max1<X[i]){
max1=X[i];
s=i;

}
}
X[s]=0;
for(i=0;i<x;i++){
 
if(max2<X[i]){
max2=X[i];

}

}
suma=max1+max2;

return suma;


}
int main(){
int a[8];
aleatorio(a,8);
imprimir(a,8);
printf("%d",suma1(a,8));

}
