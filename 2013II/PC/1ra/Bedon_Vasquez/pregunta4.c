#include<stdio.h>
int main()
{
    int anio,a,b,c,d,r,p,n,i,j,m,q;
   printf("introduzca el anio en el intervalo de 1000 a 2000 :");
   scanf("%d",&anio); 
 a=anio/1000;
 m=anio%1000;
 b=m/100;
 n=m%100;
 c=n/10;
 p=n%10;
 d=p;
 printf("el anio en numeros romanos es :");
 for(i=1;i<=a;i++)

{ printf("M");
}
 for(j=1;j<=b;j++)
 printf("C");
 for(r=1;r<=c;r++)
 printf("X");
  if(d==4)
   printf("IV");
   if(d=9)
   printf("IX");
   else
   for(q=1;q<=d;q++)
   printf("I"); 
    
return 0;    
    }
