#include<stdio.h>
#include<stdlib.h>
void ingresar(int v[100],int n){
  int i;
  for(i=0;i<n;i++){
    v[i]=random()%10;
  }
}
void mostrar(int v[100],int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",v[i]);
  }
}
void entero_repite(int v[100],int n){
  int i,j;
  printf("se repite:\n");
  for(i=0;i<n;i++){
    int c=0;
    for(j=0;(j!=i)&&(j<n);j++){
       if((v[i]==v[j])&&(c==0)){
         c++;
       }
    }
    if(c!=0){
      printf("%d\n",v[i]);
    }
  }
}
int main(){
  int v[100];
  int tam=10;
  ingresar(v,tam);
  mostrar(v,tam);
  puts("");
  entero_repite(v,tam);
  return 0;
}
