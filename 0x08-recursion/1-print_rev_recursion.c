#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - a recursion function that prin string in reverse
 * @s: the pointer to the string
 * Return: 0 always
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
