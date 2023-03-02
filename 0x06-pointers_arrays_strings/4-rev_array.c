#include "main.h"

/**
 * reverese_array - reverese array of integers 
 * @a: array
 * @n: number of ellements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] =a[n];
		a[n] = j;
	}
}
