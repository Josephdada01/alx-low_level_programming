#include "main.h"
/**
 * get_endianness - a function that get the sequence of byte
 * @n: the num
 * @b: the pointer to the byte
 * Return: void
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *b = (unsigned char *)&n;

	if (*b == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
