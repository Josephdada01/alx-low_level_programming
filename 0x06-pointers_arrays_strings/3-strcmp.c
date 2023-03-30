#include "main.h"
/**
 * _strcmp - a function that compare two strings
 *
 * @s1: first pointer to be compared
 *
 * @s2: the second pointer to be compared
 *
 * Return: strmcmp
 */
int _strcmp(char *s1, char *s2)
{
	int s;

	s = 0;

	while (s1[s] == s2[s])
	if (s1[s] == '\0')
	{
		return (0);
	}
	return (s1[s] - s2[s]);
}
