#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *array_range - a function that creates an array of integers.
 * @min: the parameter
 * @max: the second parameter
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *new_array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	new_array = (int *)malloc(size * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_array[i] = min + 1;
	}
	return (new_array);
}
