#include "main.h"
#include <stdio.h>

/**
 * main - print number from 1-0
 *
 * Fizz: for multiples of three prints Fizz
 *
 * Buzz: for multiplrs of five, prints Buzz
 *
 * Return:0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", a);
		}
	}
	printf("\n");
	return (0);
}
