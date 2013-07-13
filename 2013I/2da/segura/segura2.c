#include<stdio.h>
void rombo(int f);
const char ast ='*';
const char blancos =' ';
int main(){

int f;
printf("numero de filas(impar):");
scanf("%d",&f);

rombo(f);

return 0;
}

void rombo(int f)
{
int m,i,j,k;
m=(f+1)/2;

   for(i=1;i<=m;i++){

      for(j=1;j<m;j++)
        printf("%c", blancos);

      for(k=1;k<=f;k++)
        printf("%c", ast);


   }

  for(i=1;i<m;i++){

      for(j=1;j<m;j++)
        printf("blanco");

      for(k=1;k<=f-2*(m-1);k++)
        printf("ast");


   }


}





