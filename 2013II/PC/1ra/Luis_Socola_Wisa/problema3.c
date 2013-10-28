#include<stdio.h>
#include<stdlib.h>
int main () {
int d,m,a;
printf("ingrese mes y año separado por espacio :");
scanf("%d %d",&m,&a);
if(a%4==0 && a%400==0){
                     if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
                                                      
                                                       printf("los dias del mes son:31\n"); 
                                                       }
                     if(m==4 || m==6 || m==9 || m==11){
                                 
                                 printf("los dias del mes son:30\n");
                                 }
                     else {
                          printf("los dias del mes son:29\n");
                          }


                    }
else{
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
                                                        
                                                       printf("los dias del mes son:31\n"); 
                                                       }
    if(m==4 || m==6 || m==9 || m==11){
                                 
                                 printf("los dias del mes son:30\n");
                                 }
    else {
         printf("los dias del mes son:28\n");
         }

    }
return 0;
}
