#include <stdio.h>
#include "main.h"
/**
 * get_bit - a function that returns the value given
 * @index: the given index
 * @n: the inputs number
 * Return: the value or error if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int sum;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	sum = n & mask;
	return (sum != 0);
}
