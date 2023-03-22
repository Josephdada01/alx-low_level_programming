#include "main.h"
/**
 * print_alphabet_x10 - print them in lowercase
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{

	char ch;
	int r;

	r = 0;

	while (r < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
	r++;
	}
}
