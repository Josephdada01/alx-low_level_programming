#include "main.h"
/**
 * *_strchr - a function that locate a character
 * @s: the pointer that point to a character
 * @c: the characer in a string
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; a >= '\0'; a++)
	{
		if (s[a] == c)
		return (s + a);
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
