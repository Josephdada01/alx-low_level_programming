#include <stdio.h>
#include "main.h"
/**
 * _atoi - a function that convert string to integer
 * @s: the pointer to the string
 * @i the third parameter
 * Return: the value
 */
int _atoi(char *s)
{
	int r, sign, i;

	r = 0;
	sign = 1;
	i = 1;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i++] == '-') ? -1 : 1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i++] - '0');
		return (sign * r);
	}
}
