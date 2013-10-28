#include<stdio.h>
            int main(){
                      int a,b,c,d,x,y;
                      printf("digite su numero\n");
                      printf("su primera cifra\n");
                      scanf("%d",&a);
                      printf("su segunda cifra\n");
                      scanf("%d",&b);
                      printf("su tercera cifra\n");
                      scanf("%d",&c);
                      printf("su cuarta cifra\n");
                      scanf("%d",&d);
                      printf("su numero es %d%d%d%d",a,b,c,d);

                     if (b==9){
                              y=a+1;
                              b=0;
                              c=0;
                              d=0;
                                printf(" redondeando %d%d%d%d\n",y,b,c,d);
                            }
                    else{

                      if(c>=5){
                             x=b+1;
                             c=0; 
                             d=0;
                             printf(" redondeando %d%d%d%d\n",a,x,c,d);
                              return 0;
                           }
                      if(c<5) {
                            c=0;
                            b=0;
                            printf(" redondeando %d%d%d%d\n",a,b,c,d);
                             return 0;
                            }
                       }

                          return 0;
                       }

