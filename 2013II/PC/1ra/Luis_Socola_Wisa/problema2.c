#include<stdio.h>
#include<stdlib.h>
int main () {
int A,B,C,D;
printf("ingrese los 4 dígitos separados por espacio:");
scanf("%d %d %d %d",&A,&B,&C,&D);
if(C>=5){
        B=B+1,C=0,D=0;
        if(B==10){
                A=A+1,B=0,C=0,D=0;
                printf("%d %d %d %d\n",A,B,C,D);
                } 
        else {
             printf("%d %d %d %d\n",A,B,C,D);
             }
        }
if(C<5){
       C=0,D=0;
       printf("%d %d %d %d\n",A,B,C,D); 
       }
return 0;
}
