#include <stdio.h>
#include <stdlib.h>

int main() {
     int nota;
     int nota_valida;

     while(scanf("%d",&nota)!=EOF){
         nota_valida = 1;

         if( nota < 0 || nota > 20 )
         {
            printf("%d nota no válida\n", nota);
       	nota_valida = 0;
         }

         if( nota_valida ){
             if( nota >= 10 )
             {
                printf("%d curso aprobado\n", nota);
             }
             else
             {
                printf("%d curso desaprobado\n", nota);
             }
         }
     }

     return 0;
}
