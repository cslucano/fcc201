#include<stdio.h>
void triangulo_sup(int f){
  int j=1,k,i;
  for(;j=4;j++){
      for(k=1;k=4;k++){
         printf("*");           
      }
   }
}
int main(){
int f;
  printf("Dar el numero de filas:\n");
  do{
     scanf("%d",&f);
   }
   while((f>25)||(f%2==0));
   triangulo_sup(f);
return 0;
}
