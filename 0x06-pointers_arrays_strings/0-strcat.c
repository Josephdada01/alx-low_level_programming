#include "main.h"
/**
 * *_strcat - a function that concatenates two strings
 * @src: string
 * @dest: string
 * @(\0): null byte
 * Return: a pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int len, s;

	len = 0;

	while (dest[len] != '\0')
	{
	len++;
	}
	for (s = 0; src[s] != '\0'; s++, len++)
	{
	dest[len] = src[s];
	}
	dest[len] = ('\0');
	return (dest);
}

