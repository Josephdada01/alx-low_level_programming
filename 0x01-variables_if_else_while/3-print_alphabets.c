#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: code blocks that print out lower/uppercase alphabet
 *
 * Return: 0 (always)
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar (x);
		x++;
	}
	while (y <= 90)
	{
		putchar (y);
		y++;
	}
	putchar ('\n');
	return (0);
}
