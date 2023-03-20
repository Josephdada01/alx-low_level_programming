#include <stdio.h>
/**
 * main - The Entry point
 *
 * Description: print lowercase in reverse
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
