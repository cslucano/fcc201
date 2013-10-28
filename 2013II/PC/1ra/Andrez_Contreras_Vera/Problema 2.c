#include <stdio.h>
int main(){
 int a,b,c,d,n,m;
 printf("Ingrese un numero de cuatro digitos:\n");
 printf("Ingrese el primer digito:\n");
 scanf("%d",&a);
 printf("Ingrese el segundo digito:\n");
 scanf("%d",&b);
 printf("Ingrese el tercer digito:\n");
 scanf("%d",&c);
 printf("Ingrese el cuarto digito:\n");
 scanf("%d",&d); 
 n=a*1000+b*100+c*10+d;
 printf("El numero ingresado es %d\n", n);
 if(c<5)
 { m=a*1000+b*100;
        }
  printf("El resultado redondeado %d\n", m);
 system("pause");
}
