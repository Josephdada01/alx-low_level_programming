#include "main.h"
/**
 * print_alphabet_x10 - print them in lowercase
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{

	char j;
	int r;

	r = 0;
	while (r <= 10)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	j++;
	}
}
