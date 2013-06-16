#include<stdio.h>
  int main()
{
  int a,i;
  int b=63; 
for(i=1;i<=6;i++){
  printf("escriba su numero   ");
  scanf("%d",&a);
  
 if(a>0&&a<b)
printf("muy bajo   \n");
  if(a<100&&a>b)
printf("muy alto   \n");
  if(a<0)
printf("escribir un numero mayor que 0   \n");
 if(a>100)
printf("escribir un numero menor que 100    \n");
if(a==b){
printf("!adivinaste aprobaste!   \n");
break;
}
}
if(i==7)
printf("lo siento solo son 6 intentos   \n");
return a;
}


