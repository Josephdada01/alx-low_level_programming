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
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
	{
	dest[s] = src[s];
	}
	for (; s < n; s++)
	{
	dest[s] = ('\0');
	}
	return (dest);
}
