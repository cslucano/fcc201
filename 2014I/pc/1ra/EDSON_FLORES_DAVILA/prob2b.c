#include<stdio.h>
#include<stdlib.h>
int main(){
    int c=7,f=7;
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
           if(j<=i){
               printf("*");
           }else{
               printf("0");
           }
        }
        printf("\n");
    }
    return 0;
}
