#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int Exp (int n, int m);

int main () 
{
    int k,p;
    float s;
    for ( k=0; k<100; k++){
        p= (2*(Exp (-1,k))*(Exp (3, 0.5-k)))/((2*k)+1);
        s=s+p;
    }
    printf ( " El valor de pi es:%.5f",s); 
    return 0;       
}

int Exp (int n, int m){
int p;  
    if (m== 1)
        p= n;
    if (m== 2)
        p= m*m;
    if ((n!=1)&&(n!=2))
        p= (Exp (n, m-1))*n;
    return p;
}
        
        
        
