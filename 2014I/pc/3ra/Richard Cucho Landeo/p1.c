#include<stdio.h>
int main(){
int i,j;
int M[4];  
srand (time (NULL)); 
   for(i=0; i<4; i++) 
      M[i] = 1 + rand() %4; 
   for(i=0; i<4; i++) 
      printf ("%d\t",M[i]);
   printf("\n");
   for (j=0;j<4;j++){  
      for (i=j+1;i<4;i++){ 
            if(M[j]==M[i]){ 
               printf("El numero repetido es:%d\n",M[j]);
            }
      }          
    } 
return 0;
}
