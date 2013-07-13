#include<stdio.h>
#define MAX 99
int main(){
   int i,j,longitud2=0,longitud;
   char sub;
   char origen[MAX+1];
   char cad[MAX+1];
   printf("Ingrese opcion c--> para copiar o b--> para borrar o s--> para salir");
   scanf("%c",&sub);
   
   switch(sub){
   case 'c':   
                gets(cad);
                puts(cad);

         while(cad[i]!='\0'){
              if(cad[i]==' ')
                 longitud++;
           i++;
           }
 
          longitud=i-longitud2;
          for(j=0;j<longitud;j++){
             origen[j]==cad[j];
          }
          
          for(j=0;j<longitud;j++){
             printf("%c",origen[j]);
          }
          break;
   
   case 'b':gets(cad);
                puts(cad);
         while(cad[i]!='\0'){
              if(cad[i]==' ')
                 longitud++;
           i++;
           }
 
          while(cad[i]!='\0'){
          

          for(j=0;j<longitud;j++)
             printf(" ",origen[i]);
            i==j;
          
          printf("%c",origen[i]);
          i++;
          }
          break;
  case 's': 
           printf("salir del programa");
           break;
}

return 0;
}
