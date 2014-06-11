#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int Pasc(int n,int b);
int Pasc(int n,int b){
    if(b==0)
      return 1;
    else{
      return( Pascal(n-1,b-1)*Pascal(n-1,b)); 
}
}
int main(){
    int k,i,a,b;
    printf("introducir el numero de fila:");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
       for(k=0;k=;k++){
          printf("%d",Pascal(i,k));
     }

    printf("\n"); 
}
return 0;
}
    



