#include<stdio.h>
#include<math.h>
int Aprox();
int main(){
float s;
s=Aprox();
pirntf("el valor de pi con 5 decimales de precision es %5.f\n",s);
return 0;
}

int Aprox(){
int k=0;
float s=0;
while(fabs(3-s)>0.00005){
a=(2*k+1)*pow(3,k);
b=2*pow(3,0.5)/a;
if(k%2==0)
s=s+b;
else
s=s-b;

k++;

 }
return s;
}



