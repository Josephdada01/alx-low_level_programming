#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: pointer to an array
 * @n: the array i will be reversing it content
 * Return: 0 (always)
 */
void reverse_array(int *a, int n)
{
	int s;
	int i;
	int temp;

	for (i = 0, s = n - 1; i < s; i++, s--)
	{
		temp = a[i];
		a[i] = a[s];
		a[s] = temp;
	}
}
