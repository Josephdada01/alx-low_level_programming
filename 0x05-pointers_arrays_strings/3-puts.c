#include "main.h"
/**
 * _puts - this is a function that prints a string
 *
 * @str: the pointer to the string
 *
 * Return: string and new line
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
