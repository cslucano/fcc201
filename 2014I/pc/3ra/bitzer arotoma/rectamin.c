#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,s=0,p=0,q=0,r=0,n;
    int m[100][100];
    float a,b;
    printf("\nNumero de filas de la matriz :");
    scanf("%d",&n);
    printf("\n");
    
    printf("\t\tLA MATRIZ DE ORDEN Nx2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            m[i][j] = random()%10;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" \t\t%d %c",m[i][j],j<1?' ':'\n');
        }
    }
    /*suma de valores del orde m[i][0] i<n*/
    for(j=0,i=0;i<n;i++)
    {
        s+=m[i][j];         
    }
     
    /*suma de valores del orden m[i][1] i<n*/
    for(j=1,i=0;i<n;i++)
    {
        p+=m[i][j];         
    }
    
     
    for(i=0;i<n;i++)
    {
        q+=m[i][0]*m[i][1];         
    }
    
  
         
    for(j=0,i=0;i<n;i++)
    {
        r+=m[i][j]*m[i][j];         
    }
  
    a=(float)((n*q)-(s*p))/((n*r)-(s*s));
    b=(p-(a*s))/n;
    printf("<<La ecuacion de la recta minimo cuadrado es :\n");
    printf("f(x)=%fx+%.5f\n",a,b);
    return 0;
}
