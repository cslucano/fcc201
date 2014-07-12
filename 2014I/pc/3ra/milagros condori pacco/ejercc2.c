#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define TAM 1000000
int main(){
   
   int n,i,j,cont;
   int M[TAM];
   printf("array: \n");
  
  
   srand(time(NULL));
    for(i = 1; i <999999; i++)
    {
        
           M[i]= 1+rand()%999999;
           printf("%d ",M[i]);
        }
     for(j=1;j<1000001;j++){
           cont=0;
           if(M[i]==j){
              cont++;
               }
     
     if(cont==0){
        
         printf("el elemento faltante es: %d",j);
     }

 
}

return 0;
}
