#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - a function that return x raised to pow y
 * @x: the first value
 * @y: the second value given
 * Return: the value x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if  (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (y % 2 == 0)
	{
		return ((_pow_recursion(x, y / 2)) * (_pow_recursion(x, y / 2)));
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
