#include <stdio.h>

/**
 * main
 * Reurn: Nothing!
 */

int main(void)
{
	int n = 0;
	long o = 1, p = 2;
	while (n < 50)
	{
	if (n == 0)
	printf("%ld", 0);
	else if (n == 1)
	printf(", %ld", p);
	else 
	{
	p += o;
	o = p -0;
        printf(", %ld", p);
	}
	++n;
	}
	printf("\n");
	return (0);
}

