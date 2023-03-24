#include "main.h"

/**
 * _isupper - show if a character is uppercase
 *
 * @c: returns 1 if uppercase else 0
 *
 * Return: 0 (succes)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
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
