#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - a fuction that copy data from memory allocation
 * @dest: a pointer
 * @src: a pointer
 * @n: the integer
 * Return: the value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
