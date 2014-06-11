#include<stdio.h>
int a,b,r;
void euclides(int x, int y);
int main(){
printf("Introduzca dos numeros\n");
scanf("%d %d",&a,&b);
euclides(a,b);
return 0;
}

void euclides(int x, int y)
{if(y==0) {printf("El MCD de esos numeros es %d\n",x); 
	   return;} 
r=y;
y=x%y;
x=r;
euclides(x,y);
return;
}
