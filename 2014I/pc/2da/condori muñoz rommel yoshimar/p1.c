#include<stdio.h>
#include<math.h>
int pi(){
     int i;
     float s;
     for(i=1,s=0;2*pow(-1,i)*pow(3,1/2-i)/(float)(2*i+1)<0.000001;i++){
         s=s+2*pow(-1,i)*pow(3,1/2-i)/(float)(2*i+1);
         }
     return s;
       }
void main(){
     printf("hallando el valor de pi\n");
     printf("el valor de pi es %d",pi());
     }
