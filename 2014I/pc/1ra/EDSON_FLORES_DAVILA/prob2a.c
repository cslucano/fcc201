#include<stdio.h>
#include<stdlib.h>
int main(){
    int c=7,f=7;
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=7;j++){
             if((j>=(4-(i-1)))&&(j<=(4+(i-1)))){
                 printf("*");
             }else{
                 printf("0");
             }
        }
        printf("\n");
    }
    printf("*******\n");
    for(i=1;i<=3;i++){
        for(j=1;j<=7;j++){
             if((j>=(4-(3-i)))&&(j<=(4+(3-i)))){
                 printf("*");
             }else{
                 printf("0");
             }
        }
        printf("\n");
    }
    
    return 0;
}
