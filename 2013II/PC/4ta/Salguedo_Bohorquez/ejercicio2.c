#include <stdio.h>
#include <string.h>

int main()
{
 char s1[], s2[];
 int 

 printf("Ingrese la primera palabra:\n"); 
 scanf("%s", s1);

 printf("Ingrese la segunda palabra:\n");
 scanf("%s", s2);

 if ( strlen(s1) == strlen(s2) )
   {
    for(i=0; i<sizeof(s1)/sizeof(s1[0]); i++)
       {
        for(j=0; j<sizeof(s2)/sizeof(s2[0]); j++)
           {
            if (s1[i]!=s2[j])
                
           }
         
       }
    
   }
 else printf("No son anagramas.\n");

}
