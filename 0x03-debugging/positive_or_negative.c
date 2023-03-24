#include "main.h"
/**
 * positive_or_negative  - to know if number is positive or negative
 *
 * @i : check for i
 *
 * 0 : check zero
 *
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	printf("\n");
	return (0);
}
