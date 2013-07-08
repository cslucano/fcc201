#include<stdio.h>
#include<stdlib.h>
int main () {
  int i,j,k;
  float u[20];
  float numero;
  for(i=0;i<20;i++)
  {
    numero=rand()%21+1;

     u[i] = numero;
  }
  for(i=0;i<20;i++)
  {
    j=i+1;
    for(k=0;k<20;k++){
     if(u[i]!=u[k]){
    printf("u[%d]=%.2f\n", j,u[i]);
  }
    }
}
return 0;
}

 
