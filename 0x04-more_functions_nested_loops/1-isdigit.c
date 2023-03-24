#include "main.h"

/**
 * _isdigit - functions that check digit
 *
 * @c: is the value given
 *
 * Return: 1 if c is digit or 0 (when successful)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
	return (0);
}
