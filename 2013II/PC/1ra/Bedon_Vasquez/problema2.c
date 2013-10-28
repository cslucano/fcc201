#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,n,m,p;
    printf("introduzca el valor del primer digito del numero :");
    scanf("%d",&a); 
    printf("introduzca el valor del segundo digito del numero: ");
    scanf("%d",&b);
    printf("introduzca el valor del tercer digito del numero :");
    scanf("%d",&c);
    printf("introduzca el valor del cuarto digito del numero :");
    scanf("%d",&d);
    n=(a*1000)+(b*100)+(c*10)+d;
    printf("el numero entero es :%d \n",n);
    if((n>=1000)&&(n<10000))
    if(n%100==0)
    printf("el numero aproximado es %d ",n);
    else
    m=n/100;
    p=(m+1)*100;
    printf("el numero redondeado a la centena mas proxima es %d ",p);
getch();
return 0;    
    }
