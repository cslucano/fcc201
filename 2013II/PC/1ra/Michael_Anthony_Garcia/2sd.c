#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,d;
    printf("digite los 4 numeros de izquierda a derecha\n");
    printf("digite primer numero:");
    scanf("%d",&a);
    printf("digite segundo numero:");
    scanf("%d",&b);
    printf("digite tercer numero:");
    scanf("%d",&c);
    printf("digite cuarto numero:");
    scanf("%d",&d);
if (c<5){
printf("la centena mas proxima es:%d%d00\n",a,b);
}else printf("la centena mas proxima es:%d%d00\n",a,b+1);
return 0;
}
