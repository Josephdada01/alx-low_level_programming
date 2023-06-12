#include <stdio.h>
#include "main.h"
/**
 * _isalpha - a function that check if it is alphabet
 * @c: the integer given
 * Return: 0 always
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
