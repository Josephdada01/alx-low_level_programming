#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position;
    size_t bottom;
    size_t top;

	if (array == NULL || size == 0)
		return (-1);

	bottom = 0;
	top = size - 1;

	while (bottom <= top && value >= array[bottom] && value <= array[top])
	{
		position = bottom + (
			((double)(top - bottom) / (array[top] - array[bottom])) *
			(value - array[bottom])
			);

		printf("Value checked array");
		printf("[%ld] = [%d]\n", position, array[position]);

		if (array[position] == value)
			return (position);
		else if (array[position] > value)
			top = position - 1;
		else
			bottom = position + 1;
	}

	printf("Value checked array[2109] is out of range\n");
	return (-1);
}
