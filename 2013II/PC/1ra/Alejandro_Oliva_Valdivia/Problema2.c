#include<stdio.h>
int main(){
int A,B,C,D,N;
printf("Ingrese los digitos del entero N:\n");
scanf("%d %d %d %d",&A,&B,&C,&D);
m=C*10+D;
if(B<9&&B>0){
	if(m>=50){printf("El Redondeo es: %d%d00\n",A,B+1);}
	else{printf("El Redondeo es: %d%d00\n",A,B);}
	}
else{
	if(m>=50){printf("El Redondeo es: %d000\n",A+1);}
	else{printf("El Redondeo es: %d%d00\n",A,B);}
	}
return 0;
}

