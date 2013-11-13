#include<stdio.h>
#include<math.h>
int main (){
            float  a=0,suma=0;
            int k=0;
            printf("hallando el valor de de pi=....");
            do{
               
               a= 2*pow(-1.0,k)*pow(3.0,0.5-k)/(2.0*k+1.0);
                k=k+1;
               suma=suma+ a;
            
             }while(fabs(a)>pow(10,-5));
            printf("%f\n",suma);
             return 0;
            }



