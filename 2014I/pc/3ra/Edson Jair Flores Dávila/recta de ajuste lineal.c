#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void ingresar(float p[10][10],int f,int c){
  int i,j;
  for(i=0;i<f;i++){
    for(j=0;j<c;j++){
      scanf("%f",&p[i][j]);
    }
    puts("");
  }
}
void mostrar(float p[10][10],int f,int c){
  int i,j;
  for(i=0;i<f;i++){
    for(j=0;j<c;j++){
      printf("%f ",p[i][j]);
    }
    puts("");
  }
}
float suma_compx(float p[10][10],int f){
  int i;
  float acm=0;
  for(i=0;i<f;i++){
    acm=acm+p[i][0];
  }
  return acm;
}
float suma_compy(float p[10][10],int f){
  int i;
  float acm=0;
  for(i=0;i<f;i++){
    acm=acm+p[i][1];
  }
  return acm;
}
float suma_xy(float p[10][10],int f){
  int i;
  float acm=0;
  for(i=0;i<f;i++){
    acm=acm+p[i][0]*p[i][1];
  }
  return acm;
}
float suma_x2(float p[10][10],int f){
  int i;
  float acm=0;
  for(i=0;i<f;i++){
    acm=acm+pow(p[i][0],2);
  }
  return acm;
}
int main(){
  float p[10][10];
  int n;
  scanf("%d",&n);
  ingresar(p,n,2);
  float sx,sy,sx2,sxy;
  sx=suma_compx(p,n);
  sy=suma_compy(p,n);
  sxy=suma_xy(p,n);
  sx2=suma_x2(p,n);
  float a,b;
  a=((n*sxy)-(sx*sy))/((n*sx2)-pow(sx,2));
  b=(sy-(a*sx))/n;
  puts("la recta de ajuste lineal es:");
  printf("L:y=%f*x+%f\n",a,b);
  return 0;
}
