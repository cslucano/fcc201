#include<stdio.h>
int main(){
    float a,b,c;
    printf("Inserte la medida de los tres lados de un triangulo:");
    scanf("%f%f%f",&a,&b,&c);
    if((a==b)&&(b==c))
        printf("El triangulo es equilatero\n");
    if(a==b){
        if(b!=c)
            printf("El triangulo es isosceles\n");
            }
    if(a==c){
        if(b!=c)
            printf("El triangulo es isosceles\n");
            }
    if(b==c){
        if(a!=c)
            printf("El triangulo es isosceles\n");
            }   
    if((a!=b)&&(b!=c)&&(a!=c))
        printf("El triangulo es escaleno\n");
    return 0 ;
    }
