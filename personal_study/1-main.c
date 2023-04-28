#include <stdio.h>

/**
 * main - address of variables
 *
 * Return: always 0
 */
int main(void)
{
	char c;
	int n;

	printf("address of variable 'c': %p\n", &c);
	printf("adress of variable 'n': %p\n", &n);

	return (0);
}
