#include <stdio.h>
int main() {

float a,b,c;
printf("escriba los lados: ");
scanf("%f%f%f",&a,&b,&c);
if((a==b) && (b==c)&&(a==c))
printf("es equilatero ");
if((b==c)&&(b!=a)&&(a!=c))
printf("es isoceles");
if((a==b)&&(b!=c)&&(a!=c))
printf("es isoceles ");
if((a==c)&&(b!=c)&&(a!=b))
printf("es isoceles ");
if((a!=b)&&(b!=c)&&(a!=c))
printf("es escaleno ");
return 0;
}


