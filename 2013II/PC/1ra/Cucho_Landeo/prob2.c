#include<stdio.h>
int main(){
    int A,B,C,D,N;
    printf("Dar el valor A:\n");
    scanf("%d",&A);
    printf("Dar el valor B:\n");
    scanf("%d",&B);
    printf("Dar el valor C:\n");
    scanf("%d",&C);
    printf("Dar el valor D:\n");
    scanf("%d",&D);
    N = A*1000 + B*100 + C*10 + D;
    printf("El numero es: %d\n",N);
    if(C>5){
       N = A*1000 + (B+1)*100;
       printf("y el aproximado es: %d\n",N);
         if(B==9)
             N = (A+1)*1000;
    }     
    else
       printf("No se aproxima : %d\n",N);
return 0;
}
