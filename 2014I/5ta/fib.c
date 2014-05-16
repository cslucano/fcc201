#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	switch(n)
	{
		case 1:
			return 1;
		case 2:
			return 1;
	}
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{

	printf("fibonacci(6) = %d\n", fibonacci(6));

	return 0;
}
