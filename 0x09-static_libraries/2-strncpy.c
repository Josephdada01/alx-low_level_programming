#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - a function that copy character from one string to another
 * @dest: the destination wher the content will be copied to
 * @src: the source of the string that need to be copy
 * @n: the first character that will be copied fro source to destination
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s;

	if (*dest == '\0' && *src == '\0')
	{
		return ('\0');
	}
	s == dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = ('\0');
	return (s);
}
