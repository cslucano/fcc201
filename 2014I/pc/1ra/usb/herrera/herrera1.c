#include<stdio.h>
#include<math.h>
int main (){
   int k=0,i=1;
   float s=0.00,a;
   while(i!=0){
   a=(2*k+1)*pow(3,k);
   if(k%2==0)
   s=s+(2*pow(3,0.5))/a;
   else
   s=s-(2*pow(3,0.5))/a;
   
   
   if(s<3 && s<3.00001)
   i=0;

   
k++; 
   }
   printf("el resultado es %.5f\n",s);
  
   return 0;
   }
