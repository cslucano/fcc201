#include<stdio.h>
#include<stdlib.h>
int main () {
int a,b;
printf("ingrese 5 caracters :\n");
scanf("%d : %d",&a,&b);
if (a>=12){
          a=a-12;   
          printf("%d:%d PM\n",a,b);
          }
else {
     printf("%d:%d AM\n",a,b); 
     }



return 0;
}
