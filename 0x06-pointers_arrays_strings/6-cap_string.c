#include "main.h"
/**
 * *cap_string - afunction that change lower to uppercase strings
 *
 * @str: the string pointer
 *
 * Return: capital string
 *
 */

char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[0] >= 97 && str[0] <= 122)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')

		if (str[i + 1] >= 97 && (str[i + 1] <= 122))
		{
			(str[i + 1] = str[i + 1] - 32);
		}
		i++;
	}
	return (str);
}
