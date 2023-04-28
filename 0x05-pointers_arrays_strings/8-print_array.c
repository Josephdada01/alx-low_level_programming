#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints elements of array
 *
 * @a: the pointer
 * @n: the element to be printed out
 *
 * Return: 0 always
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	if (i < n - 1)
	{
	printf(", ");
	}
	printf("\n");
}
