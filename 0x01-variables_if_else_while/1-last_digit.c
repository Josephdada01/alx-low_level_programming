#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: code that print the last digit of number stored in var name
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 1000;
		if (ld > 5)
		{
			printf("last digit of %d is %d and is greater than 5\n", n, ld);
		}
		else if (ld == 0)
		{
			printf("last digit of %d is %d and is 0\n", n, ld);
		}
		else
		{
			printf("last digit of %d is %d and less than 6 and not 0\n", n, ld);
		}
		return (0);
}
