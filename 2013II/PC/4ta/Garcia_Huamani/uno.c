#include <stdlib.h>
#include <stdio.h>

int main(){
int i,k;
char a[]="LEGREXIRDRVJLEKVOKFHLVTFEKZVEVKFURJCRJCVKIRJUVCRSVTVURIZFLEVAVDGCFVJTRURMVQHLVKIRSRAFWVCZODVGRXRLENYZJBP";
char* p=a;
for(i=0;i<104;i++){
if(*(p+i)>='F')
printf("%c",*(p+i)-'F'+'A');
else
printf("%c",*(p+i)-'F'+'Z'+1);
}
printf("\n");
for(i=0;i<104;i++){
if(*(p+i)>='E')
printf("%c",*(p+i)-'E'+'A');
else
printf("%c",*(p+i)-'E'+'Z'+1);
}
printf("\n");
for(i=0;i<104;i++){
if(*(p+i)>='L')
printf("%c",*(p+i)-'L'+'A');
else
printf("%c",*(p+i)-'L'+'Z'+1);
}
printf("\n");
for(i=0;i<104;i++){
if(*(p+i)>='I')
printf("%c",*(p+i)-'I'+'A');
else
printf("%c",*(p+i)-'I'+'Z'+1);
}
printf("\n");
for(i=0;i<104;i++){
if(*(p+i)>='X')
printf("%c",*(p+i)-'X'+'A');
else
printf("%c",*(p+i)-'X'+'Z'+1);
}
printf("\n");
printf("vemos que hay una diagonal de R pues este es el desplazamineto en ASCII. Entonces el mensaje seria:\n");
for(i=0;i<104;i++){
if(*(p+i)>='R')
printf("%c",*(p+i)-'R'+'A');
else
printf("%c",*(p+i)-'R'+'Z'+1);
}
return 0;
}
