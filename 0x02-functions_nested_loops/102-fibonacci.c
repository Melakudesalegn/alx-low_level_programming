#include <stdio.h>

/**
 * main
 * Reurn: Nothing!
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;
	while (i < 50)
	{
	if (i == 0)
	printf("%ld", 0);
	else if (i == 1)
	printf(", %ld", k);
	else 
	{
	k += j;
	j = k - j;
        printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}

