#include<stdio.h>
#include<math.h>
float pi(){
    int k;
    float p=0,p1;
    for(k=0;k<=9999;k++){
    p1=(2*((float)pow(-1,(float)k)*(float)pow(3,(float)(0.5-k))))/((2*k)+1);
    p=p1+p;
    }
   return p;
}
int main(){
    printf("El valor de PI=%.5f \n",pi());
return 0;
}   
