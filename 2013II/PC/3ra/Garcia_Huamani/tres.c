#include <stdio.h>
#include <stdlib.h>


int SumadeDosMasGrandes(int a[1000000],int tamano){
    int mayor1,mayor2,cont=0,i,j,k;
mayor1=a[0];
for(i=0;i<tamano;i++){
if(a[i]>=mayor1)
mayor1=a[i];
}

for(k=0;k<tamano;k++){
if(mayor1=a[k])
cont++;
}

if(cont>1)
return 2*mayor1;
else  { for(j=0;j<tamano;j++){
if(a[j]>=mayor2 && a[j]<mayor1)
mayor2=a[j];
}
return mayor1+mayor2;
}
}


int main(){
int a[1000000];
int suma,tamano,m;
    printf("escriba el tamaño del arreglo:");
    scanf("%d",&tamano);
    printf("ingrese los numeros de nuestro arreglo");
    for(m=0;m<tamano;m++){
    scanf("%d",&a[m]);
    }
    suma=SumadeDosMasGrandes( a, tamano);
    printf("la suma de los enteros mas grandes es: %d",suma);
return 0;
}

