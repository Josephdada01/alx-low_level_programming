#include <stdio.h>
#include "main.h"
/**
 *  *_strcat - a function that concatenate string
 *  @dest: the pointer
 *  @src: the second pointer
 *  Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = ('\0');
	return (new);
}
