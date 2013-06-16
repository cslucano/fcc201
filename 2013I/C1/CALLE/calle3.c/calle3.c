#include<stdio.h>
int main(){
  float a,b,c;
    printf("ingrese los lados enteros del triangulo\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a==b) && (b==c))
      printf("el triangulo es equilatero\n");
       else 
          if((a==b) || (a==c))
            printf("el triangulo es isoceles\n");
           else
              printf("el triangulo es escaleno\n");
    return 0;
   }
