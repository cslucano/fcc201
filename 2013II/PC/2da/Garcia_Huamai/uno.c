#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a,k,i,j,h,suma=0;
    for (k=0;;k++){
    i=2*pow(-1,k);
    j=pow(3,0.5-k);
    h=2*k+1;
    suma=suma+i*j/h;
    a=i*j/h;
    if(fabs(a)<pow(10,-5))
    break;
    }
    printf("la aproximacion de pi es:%f\n",suma);
    
   
return 0;
}
