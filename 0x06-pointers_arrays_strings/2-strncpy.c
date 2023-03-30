#include "main.h"
/**
 * *_strncpy- a function that copies a string
 * @dest: pointer destination
 * @src: the pointer that will be copied
 * @n: the number that will be copied
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, s;
       
	len = 0;

	for (s = 0; n-- && src[s] != '\0'; s++, len++)
	{
	dest[len] = src[s];
	}
	for ( ; n-- && src[s]; s++)
	{
	dest[len] = ('\0');
	}
	return (dest);
}
