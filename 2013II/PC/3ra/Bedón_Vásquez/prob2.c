#include<stdio.h>
//#include<conio.h>

int main()
{   int i,j,m,n,contador=0;
    int arreglo[1000];
   printf("introduzca el tamaño del arreglo :");
    scanf("%d",&n);
    printf("introduzca los elementos del arreglo : \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arreglo[i]);
     }
    printf("introduzca el elemento que desea saber si esta en el arreglo : \n");
    scanf("%d",&m);
    for(j=0;j<n;j++)
   { 
   if(arreglo[j]==m)
    contador++;
    
}
if(contador>0)
printf("el elemento si se encuentra en el arreglo\n");
else
printf("el elemento no se encuentra en el arreglo \n");
    getchar();
    return 0;
    }
