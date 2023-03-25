#include "main.h"

/**
 * print_square - printd the size of square
 *
 * @size: the size ot the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
