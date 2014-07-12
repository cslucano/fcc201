#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define TAM 4
int main(){
   
   int n,i,j,cont;
   int M[TAM];
   printf("array: \n");
  
  
   srand(time(NULL));
    for(i = 1; i <TAM; i++)
    {
        
           M[i]= 1+rand()%(TAM-1);
           printf("%d ",M[i]);
        }
     for(j=1;j<TAM;j++){
           cont=0;
           if(M[i]==j){
              cont++;
               }
     
     if(cont>1){
        
         printf("el elemento repetido es: %d",j);
     }

 
}

return 0;
}
