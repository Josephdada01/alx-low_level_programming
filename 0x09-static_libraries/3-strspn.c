#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that return the index of the first character found
 * @s: the pointer to the string
 * @accept: the index
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len, j;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}
	return (len);
}
