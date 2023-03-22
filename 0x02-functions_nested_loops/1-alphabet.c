#include "main.h"

/**
 * print_alphabet - print lower case
 *
 * Description: code blocks that print lowercase alphabet
 *
 * Return: void
 *
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
