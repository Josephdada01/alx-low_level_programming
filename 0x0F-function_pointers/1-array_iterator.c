#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function pointer that iterate over an array
 * @array: a pointer to the array
 * @size: the size of an array
 * @action: the function to the pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == 0)
	{
		return;
	}
	action(*array);
	array_iterator(array + 1, size - 1, action);
}
