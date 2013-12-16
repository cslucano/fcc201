#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

int fordenalfabetica(const void* pelem1,const void* pelem2) 
{ 
   char*nombre1,*nombre2; 
   nombre1=(char*)pelem1; 
   nombre2=(char*)pelem2; 
   return strcmp(nombre1,nombre2); 
}

main () { 
 int i,CUANTOS; 
 int cont1=0,x=Tnombres[0][30],k;
 printf("Introduce cuantos nombres se agregaran\n"); 
 scanf("%d",CUANTOS)
 char Tnombres[CUANTOS][30]; 
 char nombre[30]; 
 int aux[CUANTOS][30];
  
 for (i=0;i<CUANTOS;i++) 
 { 
    gets(nombre); 
   strcpy(Tnombres[i],nombre); 
 } 
 printf("\n\nOrdenados alfabeticamente \n"); 
 
  
 for(k=0,cont1=0;;){
 while(cont1<N){
 	
    p=Tnombres[i][30];
    cont1++;
    if(x<p){
    	menor=x;
        pos=cont1;
    }
    else{
    	menor=p;
    }
 }
      printf("la posicion del menor numero es %d\n",pos);
 strcpy(aux[k],Tnombre[pos-1][30]);
 
}
 for(i=0;i<5;i++) 
    printf("%s\n",Tnombres[i]); 
} 

