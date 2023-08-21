#include <stdio.h>
#include "main.h"
/**
 * _strlen - a functio that determine the lenght of a string
 * @s: the pointer
 * Return: the lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
