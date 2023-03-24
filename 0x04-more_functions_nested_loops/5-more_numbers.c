#include "main.h"

/**
 * more_numbers - functions that print 0-14 ten times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			putchar('1');
			putchar(b % 10 + '0');
		}
	putchar('\n');
	}
}
