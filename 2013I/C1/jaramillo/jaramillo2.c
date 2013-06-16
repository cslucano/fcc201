#include <stdio.h>
int main()
{
int a,b,c;
printf("los numeros son ");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c)&&(b>c))
printf("la salida sera ",c,b,a);
return 0;
}
