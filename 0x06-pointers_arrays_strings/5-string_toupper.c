#include "main.h"
/**
 * *string_toupper - a function that change lowercase to uppercase
 *
 * @s: the pointer
 *
 * Return: 0
 */
char *string_toupper(char *s)
{
	int str;

	str = 0;

	while (s[str] != '\0')
	{
		if (s[str] >= 97 && s[str] <= 122)
		{
			s[str] -= 32;
		}
		str++;
	}
	return (s);
}
