#include "main.h"
/**
 * _strspn - a function that get the lenght of a prefix substring
 * @s: the initial segment
 * @accept: the byte
 * Return: the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
