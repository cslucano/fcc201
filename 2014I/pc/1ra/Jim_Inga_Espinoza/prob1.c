#include <stdio.h>
#include <math.h>
#define n 8

int main(){
	float Pi;
	int i;
	
	for(i=0;i<=n;i++)
      Pi=Pi+((2*(pow(-1,i))*(pow(3,0.5-i)))/((2*i)+1));
     
    printf("%.5f",Pi);

   return 0;
}
