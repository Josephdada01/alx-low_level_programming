#include <stdio.h>
#include "main.h"
/**
 * _strcpy - a funtion that copy content of one string to another
 * @dest: the destination of the string
 * @src: the source
 * Return: 0 on success
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = ('\0');
}

