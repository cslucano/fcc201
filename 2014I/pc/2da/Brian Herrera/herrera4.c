#include<stdio.h>
int MCD(int ,int );
int main(){
int a,b;
printf("ingrese los numeros :");
scanf("%d %d",&a,&b);
printf("el maximo comun divisor de los numeros %d y %d es %d\n",a,b,MCD(a,b));
return 0;
}

int MCD(int x, int y){
if(x==1 || y==1)
return 1;

if(x==y)
return x;

if(x==0)
return y;

if(y==0)
return x;

else if(x<y)
return MCD(x,y%x);

else 
return MCD(y,x%y);

}
