#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    float i,j,x=4;
    do{
    i=pow(x,3)-10*x+1;
    j=3*pow(x,2)-10;
    x=x-i/j;
    }while(i/j>pow(10,-5));
    printf("la raiz es:%f\n",x);
return 0;
}
