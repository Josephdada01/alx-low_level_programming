#include "main.h"

/**
 * _puts_recursion - a recursion function that prints a string
 *
 * @s: the pointer to the charcter
 *
 * Return: 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
