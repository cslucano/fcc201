#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{  
 float t;
 do
 {
t=4.0;
 t=t-((pow(t,3)-(10*t)+1)/(3*pow(t,2)-10));

}while(t>=2);
printf("el valor de la raiz es : %f",t);
getch();
return 0;
	
}
