#include<stdio.h>
#include<stdlib.h>
int main() 
{  
    int a,n ;
    char c,b,d ;
    printf("Ingrese la hora: ");
    scanf("%d%c%c%c",&a,&c,&b,&d);
 if ( a > 12)
  {
    n = (a-12);
   printf("La hora es %d%c%c%c PM\n",n,c,b,d);
  }
 else 
  {
    n = a;
   printf("La hora es %d%c%c%c AM\n",n,c,b,d);
  }
return 0; 
}
   
