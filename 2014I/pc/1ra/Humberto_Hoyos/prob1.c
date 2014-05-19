#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int n;

	n=100;

	float i;

	double pi;

	for(i=0;i<=n;i++){

		pi = 2*(pow(-1,i))*(pow(3,0.5-i)) / (2*i)+1;

		pi += pi;
	}

	printf("pi = %.5f\n",pi);

	return 0;

}
