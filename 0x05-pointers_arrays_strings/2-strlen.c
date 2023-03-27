#include "main.h"
/**
 * _strlen - functions that return the lenght of a string
 * @s: the string
 * Return: string and lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
