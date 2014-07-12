#include<stdio.h>
#include<stdlib.h>
void ingresar(int *p,int n){
  int i;
  for(i=0;i<n;i++){
    *(p+i)=random()%10;
  }
}
void mostrar(int *p,int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",*(p+i));
  }
}
int SumadeDosMasGrandes(int *p,int n){
  int i;
  int aux1=0,aux2=0;
  for(i=0;i<n;i++){
     if(aux1<(*(p+i))){
        aux1=*(p+i);
     }
  }
  for(i=0;i<n;i++){
     if((aux2<(*(p+i)))&&(aux1!=(*(p+i)))){
        aux2=*(p+i);
     }
  }
  return aux1+aux2;
}
int main(){
  srand(time(NULL));
  int v[100];
  int tam=10;
  int *p;
  p=&v[0];
  ingresar(p,tam);
  mostrar(p,tam);
  puts("");
  int s; 
  s=SumadeDosMasGrandes(p,tam);
  printf("la suma es: %d\n",s);
  return 0;
}
