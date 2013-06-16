#include<stdio.h>
int main(){
    int a,b,c,men,med,may;
    printf("Insertar 3 numeros positivos DISTINTOS ENTRE SI:");
    scanf("%d%d%d",&a,&b,&c);
    if(((a<b)&&(a>c))||((a>b)&&(a<c)))
        med=a;
    if(((b<a)&&(b>c))||((b>a)&&(b<c)))
        med=b;
    if(((c<b)&&(c>a))||((c>b)&&(c<a)))
        med=c;
    men=a<b?a:b;
    men=men<c?men:c;
    may=a>b?a:b;
    may=may>c?may:c;
    printf("%d,%d,%d\n",med,men,may); 
    return 0;
    }
