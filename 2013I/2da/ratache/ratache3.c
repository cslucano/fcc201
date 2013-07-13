#include<stdio.h>
#include<math.h>
#define PI 3.1415
float fraccion(float num1,float num2){
return num1/num2;
}
float productowallis(int num){
if(num=0) return 1.0;
if(num%2==0)
return productowallis(num-1)*fraccion(num,num+1);

else
	return productowallis(num-1)*fraccion(num+1,num);
}

main(){
float pr;
int i;
for(i=1;pr<3.1415;i++)
pr=productowallis(i);
if ((i-1)%2==0)
printf("numero de pares %d",(i-1)/2);
else printf("numero de pares %d",i-2);
}
