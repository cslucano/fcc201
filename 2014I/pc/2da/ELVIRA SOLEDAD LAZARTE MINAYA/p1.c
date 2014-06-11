#include<stdio.h>
#include<stdlib.h>

int numero();
int suma(int x);

  int main(){

  int n;
  n=numero();
printf("%d\n",suma(n));

  return 0;
  }

  int numero(){
  int x;
  printf("ingrese el numero\n");
  scanf("%d",&x);
  return x;

   }
   
  int suma(int x){
      int i, s=0;
     for(i=1;i<=x;i++){
   
        s=s+i;

        }
    return s;
    }
