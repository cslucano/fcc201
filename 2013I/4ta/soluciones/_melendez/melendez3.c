#include<stdio.h>
#include<stdlib.h>
#define MAX 99
char fun(char *cad);
int main(){
    int i=0,j=0;
    char *cad[MAX+1];
    char cad3[MAX+1];
    printf("ingresar cadena \n");
    gets(*cad);
    while(*cad[i]!='\0'){
          while(*cad[i]==' '){ 
            j++;
           if(j==0)
             printf("no hay apellidos \n");
           if(j==1)
             printf("falta un apellido \n");
}
    i++;
    }
 
   
         cad3[i]=fun(*cad);
         puts(cad3);
   
    return 0;
}
    
char fun(char *cad){
    char cad2[MAX+1];
    int i=0,j;
    while(cad[i]!='\0'){
         
         while(cad[i]!=' '){
               for(j=0;j<2;j++) 
                  cad2[i]=cad[i];
         }
 i++;
}

     return cad2[MAX+1];
}



               
     
    
   
          
            
          
