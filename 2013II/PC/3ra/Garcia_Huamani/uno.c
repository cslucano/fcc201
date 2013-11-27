#include <stdio.h>
#include <stdlib.h>

int main(){
int a[1000000];
    int cont=0,i,j,m,numero;
    printf("ingrese los numeros de nuestro arreglo");
    for(m=0;m<1000000;m++){
    scanf("%d",&a[m]);
    }
    for (i=0;i<1000000;i++){
    for (j=0;j<i;j++){
    if(a[i]==a[j]){
    numero=a[j];
    cont++;
    }
    }	
    }
    printf("el entero que se repite es: %d",numero);
    printf("el numero %d se repitio %d veces",numero,cont);
return 0;
}
