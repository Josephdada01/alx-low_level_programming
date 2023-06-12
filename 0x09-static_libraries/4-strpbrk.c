#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - a function that check if string is present in another string
 * @s: the pointer to the string
 * @accept: the second string
 * Return: 0 always on success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	pos = i;
	for (i = 0; s[i] != '\0'; i++)

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return ('\0');
	}
}
