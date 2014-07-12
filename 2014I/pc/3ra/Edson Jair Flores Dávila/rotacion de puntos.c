#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void ingresar(int m[10][10],int f,int c){
  int i,j;
  for(i=0;i<f;i++){
     for(j=0;j<c;j++){
        m[i][j]=random()%10;
     }
  }
}
void mostrar(int m[10][10],int f,int c){
  int i,j;
  for(i=0;i<f;i++){
     for(j=0;j<c;j++){
        printf("%d ",m[i][j]);
     }
     printf("\n");
  }
}
void mostrarf(double m[10][10],int f,int c){
  int i,j;
  for(i=0;i<f;i++){
     for(j=0;j<c;j++){
        printf("%lf ",m[i][j]);
     }
     printf("\n");
  }
}
void multi(int m1[10][10],int f1,int c1,double m2[10][10],int f2,int c2,double m3[10][10],int *f3,int *c3){
  int i,j;
  for(i=0;i<f1;i++){
     for(j=0;j<c2;j++){
        int r;
        double acm=0;
        for(r=0;r<c1;r++){
            acm=acm+m1[i][r]*m2[r][j];
        }
        m3[i][j]=acm;
     }
  }
  *f3=f1;
  *c3=c2;
}
void rotacion(int m1[10][10],double m2[10][10],int f,int r){
  double dv[10][10];
  dv[0][0]=cos((r*M_PI)/180);
  dv[0][1]=sin((r*M_PI)/180);
  dv[1][0]=-sin((r*M_PI)/180);
  dv[1][1]=cos((r*M_PI)/180);
  double b[10][10];
  int f1,c1;
  multi(m1,f,2,dv,2,2,m2,&f1,&c1);
  
}
int main(){
  int v[10][10];
  double rv[10][10];
  ingresar(v,8,2);
  mostrar(v,8,2);
  puts("");
  int ang;
  printf("ingrese el angulo de rotacion en grados sexagesimales:");
  scanf("%d",&ang);
  rotacion(v,rv,8,ang);
  mostrarf(rv,8,2);
  return 0;
}
