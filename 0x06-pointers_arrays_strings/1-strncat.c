#include "main.h"
/**
 *  *_strncat - a function that oncatenate two strings
 *  @dest: the string
 *  @src: the string that need to be append
 *  @n: the bytes
 *  Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, s;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (n-- && src[s] != '\0') s++, len++;
	{
	dest[len] = src[s];
	}
	dest[len] = ('\0');
	return (dest);
}
