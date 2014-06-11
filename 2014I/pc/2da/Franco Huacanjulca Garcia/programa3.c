#include<stdio.h>
int pascal(int x, int y);
int n,a=1,b=1;
int main(){
printf("Introduzca hasta que fila desea : \n");
scanf("%d",&n);
pascal(a,b);


return 0;
}
int pascal(int x, int y)
	{x=1;
	 y=1;
	if(x==n) return 0;
	if(x==1) printf("1 ")y++;
	if((x==y)&&(x!=1)) {printf("1\n"); x++;y=1;}
	else return pascal(x-1,y-1)+pascal(x-1,y);}
