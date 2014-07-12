#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 int decimalesf( char X[],int tam){
        int i=tam-1,cont=0;
                        
           while(X[i]!='.'){
                   cont++;
                   i--;
                   }
                   
           return cont;
     
     }
 float obtenerflotante(char X[],float *valor,int tam,int dec){
        int m=1,i;
        *valor=0;
        float s,t;
        
 
     for(i=0;i<dec;i++){
     
                                   
           *valor=*valor+(X[tam-i-1]-'0')*m/pow(10,dec);
           
          
           m=m*10;
            
           }
           s=*valor;
         m=1;
        *valor=0;
     for(i=dec+1;i<tam-1;i++){
                        
           *valor=*valor+(X[tam-i-1]-'0')*m;
           m=m*10;
           
           }     
           t=*valor;
           
           
           if(X[0]=='+'){
                 return (s+t)*1;        
                }
           if(X[0]=='-'){
                 return (s+t)*-1;
                }    
       
       
       
       }

int main(){
    int m,f; 
    float flotante;
   
    char cadena2[40];
    
    
    printf("ingresa la cadena flotante\n");
    gets(cadena2);
    f=strlen(cadena2);
    printf("la cantidad de decimales cadena2:%d\n",decimalesf(cadena2,f));
    m=decimalesf(cadena2,f);
    printf("el flotante :%f\n",obtenerflotante(cadena2,&flotante,f,m));
    
    
    system("pause");
    return 0;
    }
