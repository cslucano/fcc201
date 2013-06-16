#include<stdio.h>
#include<math.h>
#define pi 3.1416
 float radian (int x);
float coseno(float x);
float potencia(float x,int n);
 int factorial(int n);
void main()
{
    float y;
     int i;
      for(i=0;i<=20;i++){
       y=coseno(radian(i));
       printf("\t\t el coseno de %d es %f\n",i,y);
      }
}
    float radian (int x)
       { float t;
          t=((float)x*pi)/180.0;
          printf("%f\n",t);
          return t;
       }
    float coseno(float x)
        { float t=1.0;
          int n;
          for(n=0;n<=20;n+2)
           { t+=(pow(-1,2*n+1)*potencia(x,n))/(float)factorial(n);
           printf("%f\n",t);}
             return t;
        }
    
   float potencia(float x,int n)
     {   float pot=1.0;
           int i;
        if(x!=0) 
          {  for(i=0;i<=n;i+2)
            pot=pot*pow(x,2);
            return pot;
          }
        else
            return 0;
         }
   int factorial(int n)
     {    if(n==0)
             return 1;
          else
            return n*factorial(n-1);
      }
 














