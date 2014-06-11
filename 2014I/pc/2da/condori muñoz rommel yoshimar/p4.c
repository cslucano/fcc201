#include<stdio.h>
int mcd(int a,int b)
{
    int c,r;
    c = a/b;
    r = a%b;
    if(r == 0)
       return b;
    else
       mcd(c,r);
   } 

void main(){
     int x,y,a;
     printf("dar dos numeros:\n");
     scanf("%d %d",&x,&y);
     if(x<y){
         a=x; 
         x=y;
         y=a;
         }
      printf("el mcd de %d y %d es %d",x,y,mcd(x,y));
      } 
