#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int S (int n);

int S (int n){
int r;
    while ( n>0){
        if (n==1)
          r =1;
        if (n==2)
          r=3;
        if ( (n!=1) && (n!=2)) 
          r= S (n-1)+n;
     }
    return r;
}

int main () 
{
    int n, r;
    scanf ( "%d", &n);
    printf ( " Para n igual a :%d\n",n); 
    r = S (n);
    printf ( " El valor de la suma de los n numeros enteros es: %d\n",r); 
    return 0;  
}


