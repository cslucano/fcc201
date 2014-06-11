#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int i;
float pi=0.0,c,b;
for(i=0;i<10;i++){
	b=pow(-1,i)*pow(3,0.5-i);
	c=2*b/(2*i+1);
	pi=pi+c;
}
printf("pi: %f", pi);
return 0;
}
