#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int MCD(int x, int y);
int MCD(int x, int y){
    if(x%y==0)
      return y;
    else{
      return MCD(y,x%y); 
 }
}
void main(){
    int a,b,m;
    printf("introduzca dos numeros enteros a y b (a>b): \n");
    scanf("%d%d",&a,&b);
    m=MCD(a,b);
    printf("el MCD(%d,%d)=%d\n",a,b,m);
}

