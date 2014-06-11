#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double serie(){
    int k;
    double sum=0,pi=3.141592;     
    for(k=0;1==1 ;k++){
       sum+=2*pow(-1,k)*pow(3,0.5-k);
       if(sum-pi<0.00001)
          printf("el valor obtenido de pi es %lf",sum);   
}
return sum;    
    
    
    }
 void main(){
    
    printf("serie: \n");
    serie();
    printf("gracias");
}

