#include<stdio.h>
#include<math.h>   

int main (){
             float   x=1,y=0;
             do{
                           y=x;
                            x=x-0.01*(2*(x-3.141529));
             } while(fabs(x-y)>0.00001);

           printf("%f",y); 
           return 0;
           }


