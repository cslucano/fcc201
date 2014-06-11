#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double funcion(int k){
    return (2*pow(-1,k)*pow(3,0.5-k))/(2*k+1);
}
int main(){
  int i;
  double s=0;
  for(i=0;fabs(funcion(i))>0.000000000001;i++){
    s=s+funcion(i);
  }
  printf("pi=%lf\n",s);
  return 0;
}
