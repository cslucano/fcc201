#include<stdio.h>
int sumadosmasgrandes(int n,int a[n]){ 
                                      int mayor,j,i,c;
                                      
                                      for(j=0;j<n;j++){
                                                      for(i=0;i<n;i++){

                                                                      if(a[j]<=a[i]){
                                                                      c=a[i];
                                                                      a[i]=a[j];
                                                                      a[j]=c;
                                                                      }
                                                                      }
                                                       }
                                        for(i=0;i<n;i++){
                                                            printf(" %d ",a[i]);
                                                        }
                                        printf("la suma mayor es %d\n",a[n-2]+a[n-1]);
                                        }

                                     
int main(){
           int i,n;
            printf("tamaño del arreglo:");
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i++){
                                  printf("a[%d]= ",i);
                                  scanf("%d",&a[i]);
                                  }
             sumadosmasgrandes(n,a);
            return 0;
           }


