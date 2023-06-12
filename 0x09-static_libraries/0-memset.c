#include <stdio.h>
#include "main.h"
/**
 * *_memset - a fuction that copies character
 * @s: the pointer
 * @b: the parameter
 * @n: the integer
 * Return: the value of the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = (b);
	}
	return (s);
}
