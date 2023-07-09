#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - a function that convert binary number to integer
 * @b: the pointer
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = (sum << 1) + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
