#include<stdio.h>
int main(){
int i,j;
int M[1000000];  
srand (time (NULL)); 
   for(i=0; i<1000000; i++) 
      M[i] = 1 + rand() %1000000; 
   for(i=0; i<100000; i++) 
      printf ("%d\t",M[i]);
   printf("\n");
   for (j=0;j<100000;j++){  
      for (i=j+1;i<1000000;i++){ 
            if(M[j]==M[i]){ 
               printf("El numero repetido es:%d\n",M[j]);
            }
      }          
    } 
return 0;
}
