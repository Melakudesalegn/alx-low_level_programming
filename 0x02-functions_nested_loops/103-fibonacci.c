#include <stdio.h>

/**
 * main - prints the sum of Even FIbonacii numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
	K += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	ptintf("%ld\n", sum);
	return (0);
}
