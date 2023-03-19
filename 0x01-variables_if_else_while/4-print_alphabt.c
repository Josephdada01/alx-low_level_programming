#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing the lowercase except q and e
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int r = 97;

	while (r <= 122)
	{
		if (r == 101 || r == 113)
		{
			r++;
			continue;
		}
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
