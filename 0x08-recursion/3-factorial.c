#include <stdio.h>
#include "main.h"
/**
 * factorial - a function that returns the factorial of given number
 * @n: the integer
 * Return: 0 always on success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return  (n * factorial(n - 1));
	}
}
