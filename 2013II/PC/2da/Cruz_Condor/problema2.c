#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float xn=2,xnn,f,df,p=1;


while(fabs(p) > 0.00001){

f=pow(xn,3.0)-10.0*xn+1.0;
df=3.0*pow(xn,2.0)-10.0;


xnn = xn-f/df;

p=xn-xnn;

xn=xnn;
}

printf("La raiz es %f\n ",xnn);

return 0;
}
