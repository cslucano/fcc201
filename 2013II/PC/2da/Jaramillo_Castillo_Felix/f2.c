#include<stdio.h>
#include<math.h>   
int main (){
             int a,b,c;
             float   x=3;
              while (fabs(x*x*x-10*x+1)>0.00001){
                            x=x-(x*x*x-10*x+1)/(3*x*x-10);
                                                }
           printf("%f",x); 
           return 0;
           }


                
                
 
