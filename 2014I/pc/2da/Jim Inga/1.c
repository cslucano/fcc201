#include<stdio.h>
#include<math.h>


int main(){

printf("%d",valordepi(20));

return ;
}

int valordepi(int n)
{
int k;
float i,pi;

for (k=0;k<=n;k++){
i=(2*(pow(-1,k))*pow(3,0.5-k))/((2*k)+1);
pi=pi+i;
}
printf("%.5f\n",pi);
}

