#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - a function that print the stringlenght
 * @s: the pointer that point to the character
 * Return: 0 always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return ((1) +  _strlen_recursion(s + 1));
	return (0);
}
