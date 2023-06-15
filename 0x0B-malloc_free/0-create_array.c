#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that create an array of char
 * @size: the bytes
 * @c: the character
 * Return: the pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
