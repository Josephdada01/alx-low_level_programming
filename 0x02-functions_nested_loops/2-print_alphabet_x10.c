#include "main.h"
/**
 * print_alphabet_x10 - print them in lowercase
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int r;
	char j;

	for (r = 0; r <= 10; r++)
	{
	for (j = 0; j <= 26; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	j++;
	}
}
