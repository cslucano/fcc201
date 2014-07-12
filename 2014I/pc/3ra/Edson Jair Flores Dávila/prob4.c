#include<stdio.h>
#include<stdlib.h>
void ingresar(int v[20],int n){
  int i;
  for(i=0;i<n;i++){
    v[i]=random()%10;
  }
}
void ordenar(int v[20],int n){
  int i,j;
  int aux;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
       if(v[i]>v[j]){
         aux=v[i];
         v[i]=v[j];
         v[j]=aux;
       }
    }
  }
}
void mostrar(int v[20],int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",v[i]);
  }
}
int tam_sin_repeticiones(int v[20],int n){
  int i,j;
  int cont;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
       if(v[i]==v[j]){
         cont++;
       }
    }
  }
  int t;
  t=n-cont;
  return t;
}
int main(){
  int v[20];
  int tam=5;
  ingresar(v,tam);
  ordenar(v,tam);
  mostrar(v,tam);
  puts("");
  int t_real;
  t_real=tam_sin_repeticiones(v,tam);
  printf("%d\n",t_real);
  
  
  return 0;
}
