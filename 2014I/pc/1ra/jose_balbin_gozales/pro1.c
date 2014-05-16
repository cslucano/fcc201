//problema 4:
#include<stdio.h>
#include<stdlib.h>
#define PI 3.141592
#define TOL 10E-5

int main(){
    float x,y,i;//x=Xn y=Xn+1
    
    for(i=0;i<TOL;i++){
       y=x-0.1*(2*(x-PI));//f(Xn)=(Xn-PI)2+10
       x=y;
    }

    printf("el minimo valo local es :%.5f\n",y);
    return 0;
}
