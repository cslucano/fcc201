#include<stdio.h>
int main(){
int n,a,s=0;

printf("ingrese el precio:");
scanf("%d",&n);
 

a=n/10;
n=n-10*a;
s=s+a;
printf("se usan %d monedas de 10\n",a);

a=n/5;
n=n-5*a;
s=s+a;
printf("se usan %d monedas de 10\n",a);



a=n/2;
n=n-2*a;
s=s+a;
printf("se usan %d monedas de 10\n",a);



if(n==1){
s++;
printf("se usan 1 monedas de 10\n");
}

printf("el numero total de monedas es %d\n",s);

return 0;

}
