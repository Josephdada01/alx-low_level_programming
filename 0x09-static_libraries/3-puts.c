#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that writes a given string to the standard output
 * @s: the pointer to the given string
 * Return: the given string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
