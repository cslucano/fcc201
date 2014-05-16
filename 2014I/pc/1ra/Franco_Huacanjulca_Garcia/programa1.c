#include<stdio.h>
#include<math.h>
//incluimos la biblioteca math.h, dado que utilizamos pow!!
int main()
{
int n,cont=0;
//En el proceso de declaracion de variables admitimos como float a :!!!!
float a=0,a1;
//Utilizando el bucle for!!
for(n=0;n<=9999;n++){
a1=(2*((float)pow(-1,(float)n)*(float)pow(3,(float)(0.5-n))))/((2*n)+1);
a=a1+a;
    }
    printf("El valor de pi=%f \n",a);
return 0;
}   
