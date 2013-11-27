#include<stdio.h>
#include<conio.h>
int EliminarDuplicados( int arr[],int n);
int EliminarDuplicados( int arr[],int n)
{
int i,v[1000];
int ans=0;
v[ans++]=arr[0];
for(i=1;i<n;i++)
if(arr[i]=v[ans-1])
v[ans++]=arr[i];
   for(i=0;i<ans;i++) 
    arr[i]=v[i];
    }
    int main()
    {
        int arr[1000];
        int n,j;
        printf("introduzca el tamaño del arreglo:");
        scanf("d",&n);
        printf("introduzca los elementos del arreglo :");
        for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
        printf("la cantidad de elementos no duplicados es : %d ",EliminarDuplicados( arr[1000],n));
        getch();
        return 0;
        }
