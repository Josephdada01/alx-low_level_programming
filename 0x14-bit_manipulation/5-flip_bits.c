#include <stdio.h>
#include "main.h"
/**
 * flip_bits - a fun returns the num of bits flip to get from one num to anot
 * @n: the initial num
 * @m: the parameter in flip bits
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_sum = n ^ m;
	unsigned long int count = 0;

	while (XOR_sum != 0)
	{
		count += XOR_sum & 1;
		XOR_sum >>= 1;
	}
	return (count);
}
