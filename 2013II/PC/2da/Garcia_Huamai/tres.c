#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    double i,f,x=4,a=3.141590;
    do{
    i=0.01*2*(x-a);
    x=x-i;
    }while(i>pow(10,-7));
    f=pow(x-a,2)+10;
    printf("el valor aproxminado de x en el minimo local es:%lf\n",x);
    printf("el minimo local es: %lf\n",f);
return 0;
}
