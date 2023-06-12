#include <stdio.h>
#include "main.h"
/**
 * *_strchr - a function that convert string to character
 * @s: the pointer
 * @c: the character
 * Return: the value
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		return (s);
	} while (*s++);
	return (0);
}
