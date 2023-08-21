#include <stdio.h>
#include "main.h"
/**
 * *_strncat - a function that concatenate string
 * @dest: the pointer
 * @src: the second parameter
 * @n: the integer size
 * Return: the value
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}

