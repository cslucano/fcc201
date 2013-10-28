#include<stdio.h>
 int main(){
           char a,b,c,d,x;
           char e;
           printf("escriba la hora\n");
           scanf("%c%c%c%c%c",&a,&b,&e,&c,&d);
           if(a=='0'){
                    printf("la hora es %c%c%c%c%c AM\n",a,b,e,c,d);
                   }
           if(a=='1'&& b>='2'){
                   x=b-2;
                   printf("la hora es %c%c%c%c PM\n",x,e,c,d);
                   }
           if(a=='2'){
                    if(b>=2){ 
                            a='1'; 
                            x=b-2;
                             printf("la hora es %c%c%c%c%c\n",a,x,e,c,d);
                             return 0;                            }
                     else{
                           a='0';
                           x=b+8;
                           printf("la hora es %c%c%c%c%c\n",a,x,e,c,d);
                           return 0;
                          }
                        

                     printf("la hora es %c%c%c%c%c\n",a,x,e,c,d);
                   }

            return 0;
             }

