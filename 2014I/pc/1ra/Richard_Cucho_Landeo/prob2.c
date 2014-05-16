#include<stdio.h>
int main(){
    int j,k;
    for(j=1;j<=7;j++){
        printf("\n");
        for(k=1;k<=7;k++){      
           if ((j==4 && k==4) && (j==2 && k==3))
                printf("*");  
           else 
           printf("o");   
       }
     }
    printf("\n"); 
return 0;
}      
      
