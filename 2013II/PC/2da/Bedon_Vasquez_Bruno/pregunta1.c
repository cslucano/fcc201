#include<stdio.h>
#include<math.h>
int main()
{   int k,i;
    float t,pi=0.0;
	do{
	
	printf("introduzca el valor de k :");
	scanf("%d",&k);
}while(k<0);
do{

    for(i=1;i<=k;i++)
    {
    t=(2*(pow(-1,i))*pow(3,0.5-i))/(2*i+1);
	pi=pi+t;
}

printf("el valor del k-esimo termino para phi es :%f",pi);
	
}while((3.14-pi)>0.00001);
return 0;
}

