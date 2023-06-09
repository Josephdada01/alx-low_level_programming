#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - a recursive function that returns the root of a number
 * @n: the given number
 * @s: iterator
 * @e: iterator
 * Return: 0 always
 */
int new_sqrt_recursion(int n, int s, int e);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (new_sqrt_recursion(n, 1, n));
	}
}
/**
 * new_sqrt_recursion - a recursive function
 * @n: the given number
 * @s: the iterator
 * @e: the iterator
 * Return: 0 always
 */
int new_sqrt_recursion(int n, int s, int e)
{
	int m, sq;

	if (s > e)
	{
		return (-1);
	}
	m = (s + e) / 2;
	sq = m * m;

	if (sq == n)
	{
		return (m);
	}
	if (sq < n)
	{
		return (new_sqrt_recursion(n, m + 1, e));
	}
	return (new_sqrt_recursion(n, s, m - 1));
}
