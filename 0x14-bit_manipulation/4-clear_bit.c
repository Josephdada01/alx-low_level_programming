#include "main.h"
#include <stdio.h>
/**
 * clear_bit - a function that set bit to 0
 * @n: the intial bit
 * @index: the parameter
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}
