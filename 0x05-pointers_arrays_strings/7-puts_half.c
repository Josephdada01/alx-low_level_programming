#include "main.h"
/**
 * puts_half - a function that print half of the string
 *
 * @str: the pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int lenght = 0, i;

	/* now determine lenght of a string */
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	/* ptinting the second half of the string */
	if (lenght % 2 == 0)
	/* even number of characters */
	{
		for (i = lenght / 2; i < lenght; i++)
		{
			_putchar(*(str + i));
		}
	}
	else /* odd numbers of characters */
	{
		for (i = (lenght - 1) / 2; i < lenght; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
