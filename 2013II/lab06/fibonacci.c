#include <stdio.h>
#include <stdlib.h>

void fibonacci(int fib[100], int k)
{

	if(k == 1)
	{
		printf("%d, ", fib[0]);
	}
	else if(k == 2)
	{
		printf("%d, ", fib[0]);
		printf("%d, ", fib[1]);
	}
	else
	{
		fibonacci(fib, k-1);
		fib[k-1] = fib[k-2] + fib[k-3];
		printf("%d, ", fib[k-1]);
	}
}

int main()
{
	int fib[100];
	fib[0] = 0;
	fib[1] = 1;

	fibonacci(fib, 10);

	return 0;
}
