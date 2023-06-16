#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: the first parameter
 * @size: the second parameter
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		memset(ptr, 0, total_size);
	}
	return (ptr);
}
