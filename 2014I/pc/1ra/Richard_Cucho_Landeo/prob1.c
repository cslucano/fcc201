#include<stdio.h>
#include<math.h>
int main(){
    int k,cont=0;
    float p=0,p1;
    for(k=0;k<=9999;k++){
    p1=(2*((float)pow(-1,(float)k)*(float)pow(3,(float)(0.5-k))))/((2*k)+1);
    p=p1+p;
    }
    printf("El valor de PI=%f \n",p);
return 0;
}   
