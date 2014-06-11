#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float pi(float n);
int main()
{  
    float y,n;
    printf("limite a sumar");
    scanf("%f",&n);
    y=pi(n);
    printf("pi=%.5f",y);
    return 0;
}
float pi(float n)
{
    int sig,i,p,k; 
    float f1,f,c;
    f1=2*sqrt(3);
    sig=-1;        
    for(i=1;i<n;i++,sig*=-1)
    {
        k=2*i+1;
        c=sqrt(3);
        p=pow(c,k);
        f=(float)((2*sig)/(p*k));
        f1+=f; 
    }
    return f1;
}

