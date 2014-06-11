#include<stdio.h>
#include<stdlib.h>
 int numero();
 int main(){
 int a,b;
printf("ingresar primer numero");
a=numero();
printf("ingresar segundo numero");
b=numero();

   }
 
 int numero(){
int x;
scanf("%d",&x);
return x;
} 

 int mcd(int x,int y){
while(x!=y)
if(y>x){
return x;
}
else{

  mcd=mcd(x,y);
  
  mcd=mcd(z,mcd);
   }
}
  }


