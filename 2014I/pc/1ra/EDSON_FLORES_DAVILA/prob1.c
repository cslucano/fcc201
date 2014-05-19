#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float pi=0;
    int i=0;
    do{
       pi=pi+2*(pow(-1,i)*pow(3,(1/2)-i))/(float)(2*i+1);
       i++;
    }while(i<100);
    printf("pi: %.5f\n",2*pi);
    return 0;
}
