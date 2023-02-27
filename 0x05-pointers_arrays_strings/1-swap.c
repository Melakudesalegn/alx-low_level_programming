#include <stdio.h>

/**
 * swap-int - swap the values
 * @a: the first integer to be swapped.
 * @b: the second swapped.
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
