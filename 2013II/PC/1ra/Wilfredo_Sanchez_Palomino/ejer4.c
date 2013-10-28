#include <stdio.h>


int main(){

 int numero, m;
 int A, B, D;
 char c;
 printf("ingrese el numero del año");
 scanf("%d",&numero);

 m=1000-numero;
 A=m/100;
switch(A){
case 0:printf("el año es ",c);
case 1:printf("el año es C");
case 2:printf("el año es CC");
case 3:printf("el año es CCC");
case 4:printf("el año es XD");
case 5:printf("el año es D");
case 6:printf("el año es DX");
case 7:printf("el año es DXX");
case 8:printf("el año es DXXX");
case 9:printf("el año es CM");
}

m=m-A*100;
B=m/10;
switch(B){
case 0:printf("el año es ",c);
case 1:printf("el año es X");
case 2:printf("el año es XX");
case 3:printf("el año es XXX");
case 4:printf("el año es XL");
case 5:printf("el año es L");
case 6:printf("el año es LX");
case 7:printf("el año es LXX");
case 8:printf("el año es LXX");
case 9:printf("el año es XC");









return 0;
}
