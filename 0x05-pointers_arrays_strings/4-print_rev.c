#include "main.h"
/**
 * print_rev - a function that print string in reverse
 *
 * @s: string refrencing to the pointer
 *
 * Return: string in reverse and new line
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
