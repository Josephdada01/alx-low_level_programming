#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that that check if c is lower
 * @c: the integer given
 * Return: 0 always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
