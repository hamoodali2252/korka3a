#include <stdio.h>


int fak(int n);

void main()
{
	printf("%d \n", fak(6));

}

int fak(int n)
{
	if (n==1)
	{
		return n;
	}
	return fak(n - 1) * n;
}
