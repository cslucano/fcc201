#include<stdio.h>
int main(){
           int a[1000000],i,j;
           for(i=0;i<1000000;i++)      {
                                  //printf("a[%d]= ",i);
                                  scanf("%d",&a[i]);
                                  }
           for(i=0;i<1000000;i++)      {
                                  for(j=i+1;j<1000000;j++){
                                                         if(a[i]==a[j]){ 
                                                                        printf("el numero que se repite es: %d\n",a[i]);
                                                                        }
                                                           }
                                   }
             return 0;
            }


                                                                           
