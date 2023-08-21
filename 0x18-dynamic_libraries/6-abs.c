#include <stdio.h>
#include "main.h"
/**
 * _abs - a function that print absolute value
 * @n: the integer given
 * Return: 0 always
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
