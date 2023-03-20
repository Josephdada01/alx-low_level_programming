#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing all the single numbers of base ten
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
