#include <stdio.h>

int main()
{

printf("Ingrese la hora:");

int num1,num2,num3,num4;
char dosp;

scanf("%d %c %d",&num1,&dosp,&num2);



if(num1>=12 && num1<=24)
{

num3=num1-12;

printf("%d%c%d",num3,dosp,num2);

}

else

{


}



return 0;
}
