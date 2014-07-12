#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10

void s(char Y[][max],char X[],int x,int y){
     int i,j,k;
     
     for(i=0;i<x;i++){
                      k=i;
           for(j=0;j<y;j++){
                 Y[i][j]=X[k];
                 k++;
                 }
              Y[i][j]='\0';
           }
     }
     
void imprimir(char X[][max],int x,int y){
     int i,j;
     for(i=0;i<x;i++){
           for(j=0;j<y;j++){
                 printf("%c",X[i][j]);
                 }
                 X[i][j]='\0';
                 printf("\n");
           }
     
     }     
int main(){
    char b[max],linea[max];
    int n,m;
    printf("ingrese la cadena\n");
    
    gets(b);
    printf("cadenas de cuantos caracteres\n");
    gets(linea);sscanf(linea,"%d",&n);
    m=strlen(b);
    char a[10][10];
    s(a,b,m-n+1,n);
    printf("\n");
    imprimir(a,m-n+1,n);
    
    
    system("pause");
    return 0;
    }
