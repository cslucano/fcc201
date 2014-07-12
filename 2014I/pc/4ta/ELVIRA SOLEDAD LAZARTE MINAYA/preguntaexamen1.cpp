#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int obtenerentero(char X[],int *valor,int tam){
     
     int m=1,i;
     *valor=0;
 
     for(i=0;i<tam-1;i++){
                        
           *valor=*valor+(X[tam-i-1]-'0')*m;
           m=m*10;
           
           }
           if(X[0]=='+'){
                 return *valor*1;        
                }
           if(X[0]=='-'){
                return *valor*-1;
                }    
        
     }
int main(){
    int entero,n; 
    char cadena[40];
    printf("ingresa la cadena\n");
    gets(cadena);
    n=strlen(cadena);

    printf("el entero :%d\n",obtenerentero(cadena,&entero,n));
    
    
    
    
    system("pause");
    return 0;
    }
    
   
