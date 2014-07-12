#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define TAM 20
int eliminarDuplicados(int M[TAM], int n){
     
        int aux [TAM];
        int final [TAM];
        int cont,num,i,j=0,k,z=0 ;
     for (i=0;i<n;i++) {
                cont=0;
                num=M[TAM];
                aux[j]=num;
                j++;
                for (k=0;k<n;k++)
                        if (aux[k] == num )
                                cont++;

                if ( cont == 1 ) {
                        final[z]=num;
                        z++;
                }    
          }
  printf("El array simplificado es: \n");
        for (i=0;i<z;i++){
                printf ("%d \n",final[i]);
                }
  return 0;
  }
     

 int main(){
   int n,i;
   int M[TAM],p;
   printf("introduzca la longitud de su array: \n");
   scanf("%d",&n);
  
   srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        
           M[i]= rand()%n;
           printf("%d ",M[i]);
        }
    
   eliminarDuplicados(M,n);
   
   
return 0;
}

