#include<stdio.h>
int main (void)
{
int p,a,b,x,y,ac1=0,ac2=0,n,m;
for(p=10; p<=50;p++){
a=p/50;
b=p%50;
ac1=ac1+a;
n=50;
x=p/13;
y=p%13;
ac2=ac2+x;
m=13;
while((n=20)||(n=10)||(n=5)||(n=2)||(n=1)){
a=b/n;
b=b%n;
ac1=ac1+a;
n--;
}
while((m=7)||(m=3)||(m=1)){
x=y/m;
y=y%m;
ac2=ac2+x;
m--;
}
if(ac1<ac2)
printf("Se usan %d monedas reales y %d monedas mistura, por lo tanto se usan mas monedas misturas\n",ac1,ac2);
if(ac1>ac2)
printf("Se usan %d monedas reales y %d monedas mistura, por lo tanto se usan mas monedas reales\n",ac1,ac2);
else
printf("Se usan %d monedas reales y %d monedas mistura, por lo tanto se usan igual cantidad de monedas\n",ac1,ac2);
}
return 0;
}
     
