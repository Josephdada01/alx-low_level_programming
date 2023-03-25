#include "main.h"
/**
 * print_diagonal - a function that print diagonal
 *
 * @n: number of time
 *
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int o, s;

	if (n <= 0)
		putchar('\n');
	for (o = 0; o < n; o++)
	{
		for (s = 0; s < o; s++)
		{
			putchar(' ');
		}
	}
		putchar('\\');
		putchar('\n');
}
