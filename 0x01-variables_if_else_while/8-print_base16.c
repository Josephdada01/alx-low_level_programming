#include <stdio.h>
/**
 * main - The Entry point
 *
 * Description: program that print number base 16
 *
 * Return: 0 (always)
 */
int main(void)
{
	int r;
	int d;

	for (r = 48; r <= 57; r++)
	{
		putchar(r);
	}
	for (d= 97; d<= 102; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
