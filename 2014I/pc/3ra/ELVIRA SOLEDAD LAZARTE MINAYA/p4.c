#include<stdio.h>
#include<stdlib.h>
void ingresar(int X[],int x){
int i;
for(i=0;i<x;i++){
scanf("%d",&X[i]);
}

}

void imprimir(int X[],int x(){
int i;
for(i=0;i<x;i++){
printf("%d",X[i]);
}
printf("\n");
}

int elimdup(int X[],int x){
cont =1,i;
for(i=0;i<x;i++){
if(X[i]!=X[i+1]){
cont ++;
}

}
return cont;
}



int main(){

int a[10];
ingresar(a,10);
imprimir(a,10);
printf("%d",elimdup(a,10));

return 0;

}


