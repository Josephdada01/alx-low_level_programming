#include "main.h"

/**
 * print_line - functions that print line
 *
 * @n: the number of times
 *
 * Return: 0 (success)
 *
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		putchar('_');
	}
	putchar ('\n');
}
