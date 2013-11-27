#include <stdio.h>
#include <stdlib.h>


int eliminarDuplicados(int a[1000000],int tamano){
    int cont=0;
    int i,j,y,k;
    for (i=0;i<tamano;i++){
    for (j=0;j<i;j++){
    if(a[i]==a[j]){
    y=a[i];
    a[i]=a[tamano-1-cont];
    a[tamano-1-cont]=y;
    cont++;
}
}
}
    for(k=tamano-cont;k<tamano;k++){
    a[k]=0;
}
return cont;
}






int main(){
int tamano,duplicados,m;
int a[1000000];
printf("escriba el tamaño del arreglo:");
    scanf("%d",&tamano);
    printf("ingrese los numeros de nuestro arreglo");
    for(m=0;m<tamano;m++){
    scanf("%d",&a[m]);
    }
duplicados=eliminarDuplicados(a,tamano);
printf("el numero de dupĺicados es:%d",duplicados);
}
