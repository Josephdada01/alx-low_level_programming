#include "main.h"
/**
 * puts2 - a function that print every character of a string
 *
 * @str: The character given
 *
 * Return: charcter and new line
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar ('\n');
}
