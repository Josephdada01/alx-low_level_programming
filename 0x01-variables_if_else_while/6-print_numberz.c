#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: printing base without usng printf,puts
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
