#include<stdio.h>
int main(){
           int i,j,a[5],cont;
            for(i=0;i<5;i++){
                                  printf("a[%d]= ",i);
                                  scanf("%d",&a[i]);
                                  }

            for(i=0;i<5;i++){
                                  for(j=1;j<=5;j++){
                                                           if(j!=a[i]){ 
                                                                        cont++;
                                                                         if(cont==4)        {
                                                                                                printf("el que falta es %d\n",j);
                                                                                              }
                                                                        
                                                                                     
                                        
                                                                        }    
                                                      
                                                    }                  
                                         cont =0;                        
                                  }
              return 0;
           }//la respuesta esta en la ultima impresion

