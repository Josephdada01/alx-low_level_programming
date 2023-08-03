#include "main.h"
/**
 * set_bit - a function that set the value bit to one
 * @n: the bit you want to set 1
 * @index: the index * Return: 1 on success or -1 on error
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
