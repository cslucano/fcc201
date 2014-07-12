#include<stdio.h>
#include<stdlib.h>
int SumaDosMasGrandes(int arrInts[],int tamano);
int main(){
    int i,y,tamano,n;
    int a[1000];
    printf("Ingrese el tamaño del vector :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       a[i]=random()%100;
       printf("%d\t",a[i]);
    }
    printf("\n");
    y=SumaDosMasGrandes(a,n);
    printf("%d\n",y);
}
int SumaDosMasGrandes(int arrInts[],int tamano){
    int i;
    int mayor=0,menor;
    menor=arrInts[0];
    for(i=0;i<tamano;i++)
      if(arrInts[i]>mayor)
           mayor=arrInts[i];
    for(i=0;i<tamano;i++)
      if(menor==mayor)
           menor=;
      else if(mayor>menor && menor>arrInts[i+1])    
         menor=menor;  
      else 
         menor=arrInts[i+1];           
    return mayor+menor;
}
