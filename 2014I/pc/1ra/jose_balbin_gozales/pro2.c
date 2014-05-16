//problema 2:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,a=7;
    
   
//segundo caso
    for(i=1;i<=7;i++){

       for(j=0;j<i;j++){
       printf("*");
       }

       a--;

       for(j=0;j<a;j++){
       printf("+");
       }

       printf("\n");
    }
    return 0;
}
