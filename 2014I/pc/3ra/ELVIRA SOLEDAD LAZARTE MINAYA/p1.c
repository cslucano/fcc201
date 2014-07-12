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
void repite(int X[100],int x){

int i,j,s;
for(i=0;i<x;i++){
int cont=0;
for(j=0;j<x;j++){
if(X[i]==X[j]){
s=X[i];
cont ++;
}


}
if(cont>1){
printf("%d",s);
}
}

}


int main(){
int a[8];
aleatorio(a,8);
imprimir(a,8);
printf("repite");
repite(a,8);

}
