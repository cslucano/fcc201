#include<stdio.h>
#include<math.h>
int main(){
    float x,y,xn,Dx,fx;
    printf("Dar el termino:\n");
    scanf("%f",&x);
    while(2<=x<=4){
     fx=pow(x,3)-10*x+1;
     Dx=3*pow(x,2)-10; 
     xn=x-(fx/Dx); 
     x++;
     y=x-xn;
     if(y<=0.00001)
       break;
     } 
    printf("LA raiz es:%f",xn);
return 0;
}
