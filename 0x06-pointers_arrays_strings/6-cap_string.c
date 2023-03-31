#include "main.h"
/**
 * *cap_string - afunction that change lower to uppercase strings
 *
 * @j: the string pointer
 *
 * Return: capital string
 *
 */

char *cap_string(char *j)
{
	int i;

	i = 0;

	if (j[0] >= 97 && j[0] <= 122)
	{
		return (0);
	}
	while (j[i] != '\0')
	{
		if (j[i] == ' ' || j[i] == '\t' || j[i] == '\n'
				|| j[i] == ',' || j[i] == ';' || j[i] == '.'
				|| j[i] == '!' || j[i] == '?' || j[i] == '"'
				|| j[i] == '(' || j[i] == ')' || j[i] == '{'
				|| j[i] == '}')

		if (j[i + 1] >= 97 && (j[i + 1] <= 122))
		{
			(j[i + 1] = j[i + 1] - 32);
		}
		i++;
	}
	return (j);
}
