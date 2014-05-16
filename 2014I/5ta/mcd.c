#include <stdio.h>
#include <stdlib.h>

int mcd(int a, int b)
{
	if(a%b==0)
	{
		return b;
	}
	return mcd(b,a%b);
}

int main()
{

	printf("mcd(1032, 180) = %d\n", mcd(1032, 180));

	return 0;
}
