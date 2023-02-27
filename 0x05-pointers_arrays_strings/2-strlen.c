#include <stdio.h>

/**
 * strlen - returns the length of string
 *
 * Return: the  length os string.
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
