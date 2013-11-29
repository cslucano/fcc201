#include<stdio.h>
//#include<conio.h>

int main()
{   int i,j,k,n,a,repetido,contador=0;
    int arreglo[1000000];
    printf("introduzca el tamaño del arreglo :");
    scanf("%d",&n);
    printf("introduzca los elementos del arreglo : \n");
    for(i=0;i<n;i++)
    
    {
    scanf("%d",&arreglo[i]);
     }
    for(k=0;k<n;k++)
    {
     a=arreglo[k];
    for(j=1;j<n;j++)
    {
    if(a==arreglo[j])
    repetido=arreglo[j];
    contador++;
     }
     }
     if(contador>0)
     printf("el elemento que se repite es %d ",repetido);
     else 
     printf("ningun elemento se repite");
    getchar();
    return 0;
    }
