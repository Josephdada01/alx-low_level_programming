#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that check if character is number
 * @c: the integer given
 * Return: 0 always
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
}
