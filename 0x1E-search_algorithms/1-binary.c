#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the arrayto search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	/* set low and highto the first and last index, mid to the middle */
	int low = 0;
	int high = size - 1;
	int mid = low + (high - low) / 2;
	int i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1; /*search in the right half */
		}
		else
		{
			high = mid - 1; /* search in the left half */
		}
		mid = low + (high - low) / 2;
	}
	return (-1); /* element is not found */
}
