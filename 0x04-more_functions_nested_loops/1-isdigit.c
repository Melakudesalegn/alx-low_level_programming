#include "main.h"

/**
 * 1-isdigit.c - check 
 * @x: the number to be checked
 * Return: 1 for acharcter 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
